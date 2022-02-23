/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneuwald <aneuwald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 08:35:42 by aneuwald          #+#    #+#             */
/*   Updated: 2022/02/23 10:50:20 by aneuwald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	init_mlx(void)
{
	t_cub3d	*cub3d;
	
	cub3d = get_cub3d();
	cub3d->mlx = mlx_init();
	cub3d->win = mlx_new_window(cub3d->mlx, WINDOW_WIDTH,
										WINDOW_HEIGHT, "CUB3D");
	cub3d->img.img = mlx_new_image(cub3d->mlx,
										WINDOW_WIDTH, WINDOW_HEIGHT);
	cub3d->img.addr = mlx_get_data_addr(cub3d->img.img, &cub3d->img.bpp,
								&cub3d->img.line_length, &cub3d->img.endian);
	mlx_hook(cub3d->win, 2, 1L << 0, key_pressed, cub3d);
	mlx_hook(cub3d->win, 3, 1L << 1, key_released, cub3d);
	mlx_hook(cub3d->win, 33, 1L << 17, exit_mlx, cub3d);
}

void	init_map(void)
{
	t_cub3d	*cub3d;
	
	cub3d = get_cub3d();
	cub3d->config.map.map = ft_calloc(100, sizeof(char *));
	if (!cub3d->config.map.map)
		exit_error("Calloc of map failed");
	cub3d->config.map.height = 0;
	cub3d->config.map.width = 0;
	cub3d->config.minimap = true;
	
}

void	init_game(int argc, char **argv)
{
	t_cub3d	*cub3d;

	init_struct();
	if (argc != 2)
		exit_error("cub3d has only 1 argument, a .cub config file!");
	cub3d = get_cub3d();
	cub3d->config.file = argv[1];
	init_map();
	init_file();
	fix_map_rows();
	validation_map();
	init_player();
	init_mlx();
	validation_textures();
	mlx_loop_hook(cub3d->mlx, loop_handler, cub3d);
	mlx_loop(cub3d->mlx);
}

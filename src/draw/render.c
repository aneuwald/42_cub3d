/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 09:15:55 by aneuwald          #+#    #+#             */
/*   Updated: 2022/02/24 19:53:11 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	render(void)
{
	t_cub3d		*cub3d;
	t_texture	*logo;

	cub3d = get_cub3d();
	draw_ceilling();
	draw_floor();
	draw_walls();
	draw_minimap();
	mlx_put_image_to_window(cub3d->mlx, cub3d->win, cub3d->img.img, 0, 0);
	logo = &cub3d->config.logo;
	if (cub3d->config.hud.logo)
		mlx_put_image_to_window(cub3d->mlx, cub3d->win, logo->img.img,
			WINDOW_WIDTH - logo->width,
			WINDOW_HEIGHT - logo->height);
}

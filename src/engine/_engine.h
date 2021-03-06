/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _engine.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 21:02:30 by aneuwald          #+#    #+#             */
/*   Updated: 2022/02/25 09:35:10 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ENGINE_H
# define _ENGINE_H

int		loop_handler(t_cub3d *cub3d);
int		key_pressed(int key, t_cub3d *cub3d);
int		key_released(int key, t_cub3d *cub3d);
int		hook_mousemove(int x, int y, t_cub3d *cub3d);
void	update_player(void);
void	update_raycast(void);

#endif
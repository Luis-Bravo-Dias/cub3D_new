/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wasd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:40:43 by ubuntu            #+#    #+#             */
/*   Updated: 2023/07/12 16:15:49 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

void	move_fwd(void)
{
	vars()->key->w = 1;
	if (vars()->map[(int)((vars()->play->pos_y))] \
			[(int)(vars()->play->pos_x - vars()->play->dir_x \
			* vars()->chrono->move_speed)] == '0')
		vars()->play->pos_x -= vars()->play->dir_x * vars()->chrono->move_speed;
	if (vars()->map[(int)(vars()->play->pos_y + vars()->play->dir_y \
			* vars()->chrono->move_speed)][(int)(vars()->play->pos_x)] == '0')
		vars()->play->pos_y += vars()->play->dir_y * vars()->chrono->move_speed;
}

void	move_bwd(void)
{
	vars()->key->s = 1;
	if (vars()->map[(int)((vars()->play->pos_y))] \
			[(int)((vars()->play->pos_x + vars()->play->dir_x \
			* vars()->chrono->move_speed))] == '0')
		vars()->play->pos_x += vars()->play->dir_x * vars()->chrono->move_speed;
	if (vars()->map[(int)(vars()->play->pos_y - vars()->play->dir_y \
			* vars()->chrono->move_speed)][(int)(vars()->play->pos_x)] == '0')
		vars()->play->pos_y -= vars()->play->dir_y * vars()->chrono->move_speed;
}

void	move_lsw(void)
{
	vars()->key->a = 1;
	if (vars()->map[(int)((vars()->play->pos_y))] \
			[(int)((vars()->play->pos_x + vars()->play->plane_x \
			* vars()->chrono->move_speed))] == '0')
		vars()->play->pos_x += vars()->play->plane_x \
			* vars()->chrono->move_speed;
	if (vars()->map[(int)(vars()->play->pos_y - vars()->play->plane_y \
			* vars()->chrono->move_speed)][(int)(vars()->play->pos_x)] == '0')
		vars()->play->pos_y -= vars()->play->plane_y \
			* vars()->chrono->move_speed;
}

void	move_rsw(void)
{
	vars()->key->d = 1;
	if (vars()->map[(int)((vars()->play->pos_y))] \
			[(int)((vars()->play->pos_x - vars()->play->plane_x \
			* vars()->chrono->move_speed))] == '0')
		vars()->play->pos_x -= vars()->play->plane_x \
			* vars()->chrono->move_speed;
	if (vars()->map[(int)(vars()->play->pos_y + vars()->play->plane_y \
			* vars()->chrono->move_speed)][(int)(vars()->play->pos_x)] == '0')
		vars()->play->pos_y += vars()->play->plane_y \
			* vars()->chrono->move_speed;
}

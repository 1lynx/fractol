/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <cchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 15:28:22 by cchampda          #+#    #+#             */
/*   Updated: 2016/09/13 15:39:55 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fdf.h"

void	init_base(t_info *i)
{
	if (i->mode == 0)
		init_mandelbrot(i);
	if (i->mode == 1)
		init_julia(i);
	if (i->mode == 2)
		init_sword(i);
	if (i->mode == 3)
		init_chameleon(i);
	if (i->mode == 4)
		init_burning_ship(i);
	if (i->mode == 5)
		init_tricorn(i);
	i->bol = 1;
}

int		parse(int key, t_info *i)
{
	if (i->bol == 0)
		init_base(i);
	if (i->bol == 1)
		key_para_change(key, i);
	mlx_clear_window(i->mlx, i->win_menu);
	r_menu(i);
	draw(i);
	return (0);
}

void	draw(t_info *i)
{
	if (i->mode == 0)
		draw_mandelbrot(i);
	if (i->mode == 1)
		draw_julia(i);
	if (i->mode == 2)
		draw_sword(i);
	if (i->mode == 3)
		draw_chameleon(i);
	if (i->mode == 4)
		draw_burning_ship(i);
	if (i->mode == 5)
		draw_tricorn(i);
	mlx_put_image_to_window(i->mlx, i->win, i->mlx_img, 0, 0);
}

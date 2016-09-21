/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <cchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 15:28:09 by cchampda          #+#    #+#             */
/*   Updated: 2016/09/21 15:54:46 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fdf.h"

void			init_mandelbrot(t_info *e)
{
	e->frac_name = ft_strdup("Mandelbrot");
	e->x1 = -2.4;
	e->x2 = 2.5;
	e->y1 = -1.75;
	e->y2 = 3;
	e->zoom = 200;
	e->iter_max = 85;
	e->blue = 255;
	e->green = 255;
	e->red = 255;
	e->motion = 0;
}

void			init_julia(t_info *e)
{
	e->frac_name = ft_strdup("Julia");
	e->c_r = 0.285;
	e->c_i = 0.01;
	e->x1 = -2.1;
	e->x2 = 2.5;
	e->y1 = -2.05;
	e->y2 = 3;
	e->zoom = 166;
	e->iter_max = 85;
	e->red = 255;
	e->green = 255;
	e->blue = 255;
	e->motion = 0;
}

void			init_sword(t_info *e)
{
	e->frac_name = ft_strdup("Sword");
	e->x1 = -2.1;
	e->x2 = 2.5;
	e->y1 = -2.1;
	e->y2 = 3;
	e->zoom = 166;
	e->iter_max = 85;
	e->red = 255;
	e->green = 255;
	e->blue = 255;
	e->motion = 0;
}

void			init_burning_ship(t_info *e)
{
	e->frac_name = ft_strdup("Burning Ship");
	e->x1 = -1.83;
	e->x2 = 2.5;
	e->y1 = -1.87;
	e->y2 = 3;
	e->zoom = 259.37;
	e->iter_max = 85;
	e->red = 255;
	e->green = 255;
	e->blue = 255;
	e->motion = 0;
}

void			init_chameleon(t_info *e)
{
	e->frac_name = ft_strdup("Chameleon");
	e->x1 = -2.1;
	e->x2 = 2.5;
	e->y1 = -2.0;
	e->y2 = 3;
	e->c_r = 0.285;
	e->c_i = 0.01;
	e->zoom = 166;
	e->iter_max = 85;
	e->red = 255;
	e->green = 255;
	e->blue = 255;
	e->motion = 0;
}

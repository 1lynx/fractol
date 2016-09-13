/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_tool.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <cchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 15:28:00 by cchampda          #+#    #+#             */
/*   Updated: 2016/09/13 15:45:35 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fdf.h"

void		put_pixel_to_image(t_info *i)
{
	if (i->i == i->iter_max && i->b_w == 0)
	{
		i->ptr_img[(i->sl * i->y) + (4 * i->x) + 2] = 0;
		i->ptr_img[(i->sl * i->y) + (4 * i->x) + 1] = 0;
		i->ptr_img[(i->sl * i->y) + (4 * i->x)] = 0;
	}
	if (i->i == i->iter_max && i->b_w == 1)
	{
		i->ptr_img[(i->sl * i->y) + (4 * i->x) + 2] = 255;
		i->ptr_img[(i->sl * i->y) + (4 * i->x) + 1] = 255;
		i->ptr_img[(i->sl * i->y) + (4 * i->x)] = 255;
	}
	else
	{
		i->ptr_img[(i->sl * i->y) + (4 * i->x) + 2] = \
		(i->i * 255 / i->iter_max) * i->blue;
		i->ptr_img[(i->sl * i->y) + (4 * i->x) + 1] = \
		(i->i * 255 / i->iter_max) * i->green;
		i->ptr_img[(i->sl * i->y) + (4 * i->x)] = \
		(i->i * 255 / i->iter_max) * i->red;
	}
}

void		init_tricorn(t_info *e)
{
	e->frac_name = ft_strdup("Tricorn");
	e->x1 = -2.08;
	e->x2 = 2.5;
	e->y1 = -2;
	e->y2 = 3;
	e->zoom = 259.37;
	e->iter_max = 85;
	e->red = 255;
	e->green = 255;
	e->blue = 255;
	e->motion = 0;
}

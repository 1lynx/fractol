/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_tool.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <cchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 15:28:00 by cchampda          #+#    #+#             */
/*   Updated: 2016/09/21 15:45:59 by cchampda         ###   ########.fr       */
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
	e->x1 = -1.68;
	e->x2 = 2.5;
	e->y1 = -1.4;
	e->y2 = 3;
	e->zoom = 259.37;
	e->iter_max = 85;
	e->red = 255;
	e->green = 255;
	e->blue = 255;
	e->motion = 0;
}

void		draw_tricorn(t_info *e)
{
	e->image_x = HEIGHT;
	e->image_y = WIDTH;
	e->x = 0;
	while (e->x < e->image_x)
	{
		e->y = 0;
		while (e->y < e->image_y)
		{
			e->c_r = e->x / e->zoom + e->x1;
			e->c_i = e->y / e->zoom + e->y1;
			e->z_r = 0;
			e->z_i = 0;
			e->i = 0;
			while (e->z_r * e->z_r + e->z_i * e->z_i < 4 && e->i < e->iter_max)
			{
				e->tmp = e->z_r;
				e->z_r = e->z_r * e->z_r - e->z_i * e->z_i + e->c_r;
				e->z_i = -2 * e->z_i * e->tmp + e->c_i;
				e->i++;
			}
			put_pixel_to_image(e);
			e->y++;
		}
		e->x++;
	}
}

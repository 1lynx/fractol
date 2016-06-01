/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <cchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/15 16:34:14 by cchampda          #+#    #+#             */
/*   Updated: 2016/06/01 18:37:26 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fdf.h"

void	init_window(t_info *i)
{
	i->mlx = mlx_init();
	i->win = mlx_new_window(i->mlx, WIDTH, HEIGHT, "Window");
	i->mlx_img = mlx_new_image(i->mlx, WIDTH, HEIGHT);
	i->ptr_img = mlx_get_data_addr(i->mlx_img, &(i->bpp), &(i->sl), &(i->ian));
	init_para(i);
	draw_mandelbrot(i);
	mlx_put_image_to_window(i->mlx, i->win, i->mlx_img, 0, 0);
	mlx_hook(i->win, 2, 3, ft_key_print, i);
	mlx_loop(i->mlx);
}

// void	draw(t_info *i)
// {
// 	draw_mandelbrot(i);
// }

void		put_pixel_to_image(t_info *i)
{
	if (i->i == i->iter_max)
	{
		i->ptr_img[(i->sl * i->y) + (4 * i->x) + 2] = i->blue;
		i->ptr_img[(i->sl * i->y) + (4 * i->x) + 1] = i->green;
		i->ptr_img[(i->sl * i->y) + (4 * i->x)] = i->red;
	}
	else
	{
		i->ptr_img[(i->sl * i->y) + (4 * i->x) + 2] = (i->i * 255 / i->iter_max) * i->blue;
		i->ptr_img[(i->sl * i->y) + (4 * i->x) + 1] = (i->i * 255 / i->iter_max) * i->green;
		i->ptr_img[(i->sl * i->y) + (4 * i->x)] = (i->i * 255 / i->iter_max) * i->red;
	}
}


void	init_para(t_info *e)
{
	e->x1 = -3;
	e->x2 = 2.5;
	e->y1 = -2;
	e->y2 = 3;
	e->zoom = 259;
	e->iter_max = 80;
	e->blue = 255;
	e->green = 255;
	e->red = 255;
	e->motion = 0;
}

int		main(void)
{
	t_info *i;

	i = malloc(sizeof(t_info));
	init_window(i);
	return(0);
}

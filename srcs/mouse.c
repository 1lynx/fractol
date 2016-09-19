/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <cchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 15:28:19 by cchampda          #+#    #+#             */
/*   Updated: 2016/09/19 18:47:11 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fdf.h"

int			key_mouse(int key, int x, int y, t_info *e)
{
	double x_real;
	double y_real;

	if (y > 0)
	{
		x_real = (x / e->zoom) + e->x1;
		y_real = (y / e->zoom) + e->y1;
		if (key == 4)
		{
			e->zoom *= 1.1;
			e->x1 = x_real - (x / e->zoom);
			e->y1 = y_real - (y / e->zoom);
		}
		if (key == 5)
		{
			e->zoom /= 1.1;
			e->x1 = x_real - (x / e->zoom);
			e->y1 = y_real - (y / e->zoom);
		}
	}
	parse(key, e);
	return (0);
}

int			motion(int x, int y, t_info *e)
{
	if (e->motion > 0)
	{
		if (x > 0 && x <= WIDTH && y > 0 && y <= HEIGHT)
		{
			e->c_r = (float)(x + 400 - WIDTH) / 300;
			e->c_i = (float)(y + 320 - HEIGHT) / 300;
		}
		draw(e);
	}
	return (0);
}

void		help(void)
{
	ft_putendl("Usage : ./fractol fractale");
	ft_putendl("fractales : ");
	ft_putendl("1. mandelbrot");
	ft_putendl("2. julia");
	ft_putendl("3. tricorn");
	ft_putendl("4. burning");
	ft_putendl("5. mandel1");
	ft_putendl("6. julia1");
	ft_putendl("7. julia2");
}

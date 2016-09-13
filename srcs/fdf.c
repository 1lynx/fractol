/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <cchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/15 16:34:14 by cchampda          #+#    #+#             */
/*   Updated: 2016/09/13 15:33:58 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fdf.h"

void	choose_type(char *av, t_info *i)
{
	if (ft_strcmp("mandelbrot", av) == 0)
		i->mode = 0;
	else if (ft_strcmp("julia", av) == 0)
		i->mode = 1;
	else if (ft_strcmp("sword", av) == 0)
		i->mode = 2;
	else if (ft_strcmp("chameleon", av) == 0)
		i->mode = 3;
	else if (ft_strcmp("burning_ship", av) == 0)
		i->mode = 4;
	else if (ft_strcmp("tricorn", av) == 0)
		i->mode = 5;
	else if (ft_strcmp("-h", av) == 0)
	{
		help();
		exit(0);
	}
	else
	{
		ft_putstr("No fractal founded, use -h to see fractals");
		exit(0);
	}
}

void	init_window(t_info *i)
{
	i->mlx = mlx_init();
	i->win = mlx_new_window(i->mlx, WIDTH, HEIGHT, "Fractal");
	i->win_menu = mlx_new_window(i->mlx, 490, 290, "Menu");
	i->mlx_img = mlx_new_image(i->mlx, WIDTH, HEIGHT);
	i->ptr_img = mlx_get_data_addr(i->mlx_img, &(i->bpp), &(i->sl), &(i->ian));
	parse(0, i);
	mlx_hook(i->win, 2, 3, parse, i);
	mlx_hook(i->win_menu, 2, 3, parse, i);
	mlx_hook(i->win, 6, 1L << 6, motion, i);
	mlx_mouse_hook(i->win, key_mouse, i);
	mlx_loop(i->mlx);
}

int		main(int ac, char **av)
{
	t_info *i;

	if (ac == 2)
	{
		i = malloc(sizeof(t_info));
		choose_type(av[1], i);
		init_window(i);
	}
	else
	{
		USAGE_ERROR;
	}
	return (0);
}

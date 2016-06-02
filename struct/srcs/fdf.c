/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <cchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/15 16:34:14 by cchampda          #+#    #+#             */
/*   Updated: 2016/06/02 18:37:10 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fdf.h"


void	init_window(t_info *i)
{
	i->mlx = mlx_init();
	i->win = mlx_new_window(i->mlx, WIDTH, HEIGHT, "Window");
	i->mlx_img = mlx_new_image(i->mlx, WIDTH, HEIGHT);
	i->ptr_img = mlx_get_data_addr(i->mlx_img, &(i->bpp), &(i->sl), &(i->ian));
	parse(0, i);
	mlx_hook(i->win, 2, 3, parse, i);
	mlx_mouse_hook(i->win, key_mouse, i);
	mlx_loop(i->mlx);
}

int		main(void)
{
	t_info *i;

	i = malloc(sizeof(t_info));
	init_window(i);
	return(0);
}

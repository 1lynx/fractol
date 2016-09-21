/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <cchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 15:28:14 by cchampda          #+#    #+#             */
/*   Updated: 2016/09/21 16:28:23 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fdf.h"

void	key_color(t_info *i, int key)
{
	if (key == 86)
		i->red += 20;
	if (key == 83)
		i->red -= 20;
	if (key == 87)
		i->green += 20;
	if (key == 84)
		i->green -= 20;
	if (key == 88)
		i->blue += 20;
	if (key == 85)
		i->blue -= 20;
}

void	key_para_change(int key, t_info *i)
{
	key_color(i, key);
	key_snd_change(key, i);
	if (key == 67)
	{
		if (i->motion == 1)
			i->motion = 0;
		else
			i->motion = 1;
	}
	if (key == 82)
	{
		if (i->mode <= 5)
			i->mode += 1;
		if (i->mode == 6)
			i->mode = 0;
		init_base(i);
	}
	if (key == 53)
	{
		exit(0);
		mlx_destroy_image(i->mlx, i->ptr_img);
		mlx_destroy_window(i->mlx, i->win);
	}
}

void	key_snd_change(int key, t_info *i)
{
	if (key == 92)
		i->iter_max += 5;
	if (key == 91)
		i->iter_max -= 5;
	if (key == 69)
		i->zoom *= 1.2;
	if (key == 78)
		i->zoom /= 1.2;
	if (key == 123)
		i->x1 += 0.1;
	if (key == 124)
		i->x1 -= 0.1;
	if (key == 126)
		i->y1 += 0.1;
	if (key == 125)
		i->y1 -= 0.1;
	if (key == 15)
		i->bol = 0;
}

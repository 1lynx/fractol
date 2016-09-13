/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <cchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 15:28:17 by cchampda          #+#    #+#             */
/*   Updated: 2016/09/13 15:38:42 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fdf.h"

void	r_menu(t_info *s)
{
	color_menu(s);
	mlx_string_put(s->mlx, s->win_menu, 15, 0, 0xFFFFFF, \
	"______________________________________________");
	mlx_string_put(s->mlx, s->win_menu, 15, 20, 0xFFFFFF, \
	"|                      MENU                  |");
	mlx_string_put(s->mlx, s->win_menu, 15, 40, 0xFFFFFF, \
	"| FRACTAL NAME:");
	mlx_string_put(s->mlx, s->win_menu, 170, 40, 0xFFFFFF, s->frac_name);
	mlx_string_put(s->mlx, s->win_menu, 465, 40, 0xFFFFFF, "|");
	mlx_string_put(s->mlx, s->win_menu, 15, 60, 0xFFFFFF, \
	"| MOVE : Arrows                              |");
	mlx_string_put(s->mlx, s->win_menu, 15, 80, 0xFFFFFF, \
	"| ZOOM : + / -                               |");
	mlx_string_put(s->mlx, s->win_menu, 420, 80, 0xFFFFFF, ft_itoa(s->zoom));
	mlx_string_put(s->mlx, s->win_menu, 15, 100, 0xFFFFFF, \
	"| ITERATION : 8 / 9");
	mlx_string_put(s->mlx, s->win_menu, 430, 100, 0xFFFFFF, \
	ft_itoa(s->iter_max));
	mlx_string_put(s->mlx, s->win_menu, 465, 100, 0xFFFFFF, "|");
	mlx_string_put(s->mlx, s->win_menu, 15, 120, 0xFFFFFF, \
	"| CHANGE MODE : 0                            |");
	mlx_string_put(s->mlx, s->win_menu, 15, 140, 0xFFFFFF, \
	"|                                            |");
}

void	color_menu(t_info *s)
{
	mlx_string_put(s->mlx, s->win_menu, 15, 160, 0xFFFFFF, \
	"| MORE RED   : 4  |  LESS RED   : 1          |");
	mlx_string_put(s->mlx, s->win_menu, 15, 180, 0xFFFFFF, \
	"| MORE GREEN : 5  |  LESS GREEN : 2          |");
	mlx_string_put(s->mlx, s->win_menu, 15, 200, 0xFFFFFF, \
	"| MORE BLUE  : 6  |  LESS BLUE  : 3          |");
	mlx_string_put(s->mlx, s->win_menu, 15, 220, 0xFFFFFF, \
	"| MOTION :  *     |                          |");
	if (s->motion == 0)
		mlx_string_put(s->mlx, s->win_menu, 225, 220, 0xFFFFFF, \
	"OFF");
	if (s->motion == 1)
		mlx_string_put(s->mlx, s->win_menu, 225, 220, 0xFFFFFF, \
	"ON");

	mlx_string_put(s->mlx, s->win_menu, 15, 240, 0xFFFFFF, \
	"| EXIT : ESC                                 |");
	mlx_string_put(s->mlx, s->win_menu, 15, 250, 0xFFFFFF, \
	"______________________________________________");
}

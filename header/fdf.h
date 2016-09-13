/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <cchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/15 16:35:26 by cchampda          #+#    #+#             */
/*   Updated: 2016/09/13 15:43:44 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include "../libft/libft.h"
# include <mlx.h>
# include <stdlib.h>
# include <stdio.h>
# include <math.h>

# define HEIGHT 1000
# define WIDTH 1000
# define USAGE_ERROR {  STR_E exit(0); }
# define STR_E ft_putendl("Error : Usage: ./fractol fractale or -h for help\n");

typedef struct	s_info
{
	void		*mlx;
	void		*win_menu;
	void		*win;
	void		*mlx_img;
	char		*ptr_img;
	char		*frac_name;
	int			bpp;
	int			sl;
	int			ian;
	int			x;
	int			y;
	int			red;
	int			green;
	int			blue;
	int			iter_max;
	int			motion;
	int			bol;
	int			mode;
	int			b_w;
	double		mot_i;

	double		x1;
	double		x2;
	double		y1;
	double		y2;
	double		zoom;

	double		image_x;
	double		image_y;

	double		c_r;
	double		c_i;
	double		z_r;
	double		z_i;
	double		tmp;

	double		i;
}				t_info;

void			draw(t_info *i);
void			init_window(t_info *i);
void			put_pixel_to_image(t_info *i);
void			key_para_change(int key, t_info *i);
void			key_color(t_info *i, int key);
int				key_mouse(int key, int x, int y, t_info *e);
void			init_base(t_info *i);
int				parse(int key, t_info *i);
void			init_mandelbrot(t_info *e);
void			init_julia(t_info *e);
void			init_sword(t_info *e);
void			init_burning_ship(t_info *e);
void			init_chameleon(t_info *e);
void			init_tricorn(t_info *e);
void			draw_mandelbrot(t_info *e);
void			draw_julia(t_info *e);
void			draw_sword(t_info *e);
void			draw_burning_ship(t_info *e);
void			draw_chameleon(t_info *e);
void			draw_tricorn(t_info *e);
int				motion(int x, int y, t_info *e);
void			choose_type(char *str, t_info *i);
void			help(void);
void			r_menu(t_info *s);
void			color_menu(t_info *s);
#endif

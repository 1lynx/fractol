/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampda <cchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/15 16:35:26 by cchampda          #+#    #+#             */
/*   Updated: 2016/06/01 18:13:36 by cchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include "../libft/libft.h"
# include "../libft/get_next_line.h"
# include <mlx.h>
# include <stdlib.h>
# include <stdio.h>
# include <math.h>

# define HEIGHT 1000
# define WIDTH 1000
# define BUF_SIZE 1000
# define FDF_ERROR { ft_putstr("Error, invalid file"); exit(-1); }
# define USAGE_ERROR { perror("Error"); return(-1); }

typedef struct	s_info
{
	void		*mlx;
	void		*win;
	void		*mlx_img;
	char		*ptr_img;
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

	double			x1;
	double			x2;
	double			y1;
	double			y2;
	double			zoom;

	double			image_x;
	double			image_y;

	double			c_r;
	double			c_i;
	double			z_r;
	double			z_i;
	double			tmp;

	double			i;
}				t_info;

void	init_window(t_info *i);
// void	draw(t_info *i);
void	put_pixel_to_image(t_info *i);
void	init_para(t_info *i);
void	draw_mandelbrot(t_info *e);
void 	aff_menu(t_info *i);
int		ft_key_print(int key, t_info *i);







#endif

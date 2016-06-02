#include "../header/fdf.h"

void init_base(t_info *i)
{
	if (i->mode == 0)
		init_mandelbrot(i);
	if (i->mode == 1)
		init_julia(i);
	if (i->mode == 2)
		init_sword(i);
	if (i->mode == 3)
		init_chameleon(i);
	if (i->mode == 4)
		init_burning_ship(i);
	if (i->mode == 5)
		init_tricorn(i);
	i->bol = 1;
}

int parse(int key, t_info *i)
{
	if(i->bol == 0)
		init_base(i);
	if(i->bol == 1)
		key_para_change(key, i);
	draw(i);
	mlx_put_image_to_window(i->mlx, i->win, i->mlx_img, 0, 0);
	return(0);
}

void draw(t_info *i)
{
	if (i->mode == 0)
		draw_mandelbrot(i);
	if (i->mode == 1)
		draw_julia(i);
	if (i->mode == 2)
		draw_sword(i);
	if (i->mode == 3)
		draw_chameleon(i);
	if (i->mode == 4)
		draw_burning_ship(i);
	if (i->mode == 5)
		draw_tricorn(i);
}

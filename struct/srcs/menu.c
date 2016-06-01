#include "../header/fdf.h"

void aff_menu(t_info *s)
{
	mlx_string_put(s->mlx, s->win, (WIDTH / 2), (HEIGHT / 2), 0xFFFFFF, "MANDELBROT");
}

int	ft_key_print(int key, t_info *i)
{


	if (key == 92)
		i->iter_max += 5;
	if (key == 88)
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
	if (key == 53)
	{
		exit(0);
		mlx_destroy_image(i->mlx, i->ptr_img);
		mlx_destroy_window(i->mlx, i->win);
	}
	draw_mandelbrot(i);
	mlx_put_image_to_window(i->mlx, i->win, i->mlx_img, 0, 0);
	return(0);
}

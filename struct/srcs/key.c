#include "../header/fdf.h"

void 	key_color(t_info *i, int key)
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
	printf("%d\n", i->red);
	printf("%d\n", i->green);
	printf("%d\n", i->blue);
	printf("\n");

	if (key == 92)
		i->iter_max += 5;
	if (key == 91)
		i->iter_max -= 5;
	if (key == 69)
		i->zoom *= 1.2;
	if (key == 78)
		i->zoom /= 1.2;
	if (key == 123)
		i->x1 += 0.01;
	if (key == 124)
		i->x1 -= 0.01;
	if (key == 126)
		i->y1 += 0.01;
	if (key == 125)
		i->y1 -= 0.01;
	if (key == 15)
		i->bol = 0;
	if (key == 45)
	{
		if(i->b_w == 1)
			i->b_w = 0;
		else
			i->b_w = 1;
	}
	printf("%d\n", i->b_w);
	if (key == 46)
	{
		i->mode += 1;
		init_base(i);
		if(i->mode >= 6)
			i->mode = 0;
	}
	if (key == 53)
	{
		exit(0);
		mlx_destroy_image(i->mlx, i->ptr_img);
		mlx_destroy_window(i->mlx, i->win);
	}

}

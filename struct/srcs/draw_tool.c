#include "../header/fdf.h"

void		put_pixel_to_image(t_info *i)
{
	if (i->i == i->iter_max && i->b_w == 0)
	{
		i->ptr_img[(i->sl * i->y) + (4 * i->x) + 2] = 0;
		i->ptr_img[(i->sl * i->y) + (4 * i->x) + 1] = 0;
		i->ptr_img[(i->sl * i->y) + (4 * i->x)] = 0;
	}
	if (i->i == i->iter_max && i->b_w == 1)
	{
		i->ptr_img[(i->sl * i->y) + (4 * i->x) + 2] = 255;
		i->ptr_img[(i->sl * i->y) + (4 * i->x) + 1] = 255;
		i->ptr_img[(i->sl * i->y) + (4 * i->x)] = 255;
	}
	else
	{
		i->ptr_img[(i->sl * i->y) + (4 * i->x) + 2] = (i->i * 255 / i->iter_max) * i->blue;
		i->ptr_img[(i->sl * i->y) + (4 * i->x) + 1] = (i->i * 255 / i->iter_max) * i->green;
		i->ptr_img[(i->sl * i->y) + (4 * i->x)] = (i->i * 255 / i->iter_max) * i->red;
	}
}

// else
// {
// 	i->ptr_img[(i->sl * i->y) + (4 * i->x) + 2] = (i->i * 255 / i->iter_max) * i->blue;
// 	i->ptr_img[(i->sl * i->y) + (4 * i->x) + 1] = (i->i * 255 / i->iter_max) * i->green;
// 	i->ptr_img[(i->sl * i->y) + (4 * i->x)] = (i->i * 255 / i->iter_max) * i->red;
// }

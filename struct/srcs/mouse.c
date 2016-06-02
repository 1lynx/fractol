#include "../header/fdf.h"

int			key_mouse(int key, int x, int y, t_info *e)
{
	double x_real;
	double y_real;

	if (y > 0)
	{
		x_real = (x / e->zoom) + e->x1;
		y_real = (y / e->zoom) + e->y1;
		if (key == 4)
		{
			e->zoom *= 1.1;
			e->x1 = x_real - (x / e->zoom);
			e->y1 = y_real - (y / e->zoom);
		}
		if (key == 5)
		{
			e->zoom /= 1.1;
			e->x1 = x_real - (x / e->zoom);
			e->y1 = y_real - (y / e->zoom);
		}
	}
	parse(key, e);
	return (0);
}

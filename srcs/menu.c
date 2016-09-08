#include "../header/fdf.h"

void	r_menu(t_info *s)
{
	mlx_string_put(s->mlx, s->win_menu, 15, 0, 0xFFFFFF, \
	"______________________________________________");
	mlx_string_put(s->mlx, s->win_menu, 15, 20, 0xFFFFFF, \
	"|                      MENU                  |");
	mlx_string_put(s->mlx, s->win_menu, 15, 40, 0xFFFFFF, \
	"| MAP:");
	mlx_string_put(s->mlx, s->win_menu, 80, 40, 0xFFFFFF, ft_itoa(s->zoom));
	mlx_string_put(s->mlx, s->win_menu, 465, 40, 0xFFFFFF, "|");
	mlx_string_put(s->mlx, s->win_menu, 15, 60, 0xFFFFFF, \
	"| MOVE : Arrows                              |");
	mlx_string_put(s->mlx, s->win_menu, 15, 80, 0xFFFFFF, \
	"| ZOOM : + / -                               |");
	mlx_string_put(s->mlx, s->win_menu, 15, 100, 0xFFFFFF, \
	"| DEEP : 6 / 9                               |");
	mlx_string_put(s->mlx, s->win_menu, 15, 120, 0xFFFFFF, \
	"| CHANGE MODE : 1                            |");
	mlx_string_put(s->mlx, s->win_menu, 15, 140, 0xFFFFFF, \
	"| ROTATION : 5 / 8                           |");
	mlx_string_put(s->mlx, s->win_menu, 15, 160, 0xFFFFFF, \
	"| EXIT : ESC                                 |");
	mlx_string_put(s->mlx, s->win_menu, 15, 170, 0xFFFFFF, \
	"______________________________________________");
}

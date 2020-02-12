#ifndef PUSH_SWAP3_PUSH_SWAP_H
# define PUSH_SWAP3_PUSH_SWAP_H

# include "minilibx_macos/mlx.h"
# include "../../gnl/get_next_line.h"
# include <stdio.h>
# include <math.h>

typedef struct      s_sort
{
	int             data;
	struct s_sort   *next;
	struct s_sort   *prev;
}                   t_sort;


typedef struct      s_fdf
{
	int width;
	int height;
	int **z_matrix;
	int zoom;
	int color;
	int shift_x;
	int shift_y;

	void *mlx_ptr;
	void *win_ptr;
}                   t_fdf;

typedef struct      s_swap
{
	t_sort *sort;
	t_sort *sort2;
	t_fdf *data;
}                   t_swap;

int			        check_args(int ac, char **av);
void                push_front(int data, t_sort **sort);
void                push_end(int data, t_sort **sort);
int 		        count_len(t_sort *sort);
void                draw(t_fdf *data);
int                 do_action(char *buff, t_sort **sort, t_sort **sort2);
void                 push_swap(t_sort **sort, t_sort **sort2, t_swap *swap);
void 		        delete_last(t_sort **sort);
void		        delete_first(t_sort **sort);
void		        swap(t_sort **sort);
t_sort 		        *get_next(t_sort *map);
void		        rotate(t_sort **sort);
void		        rrotate(t_sort **sort);
int                 visual_gen_change(t_swap *swap);

#endif

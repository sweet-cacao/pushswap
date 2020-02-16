#ifndef PUSHSWAP_PUSH_SWAP_H
#define PUSHSWAP_PUSH_SWAP_H

# include "../fdf_tutorial/minilibx_macos/mlx.h"
# include "../../gnl/get_next_line.h"
# include <stdio.h>
# include <math.h>

typedef struct      s_sort
{
	int             data;
	int             order;
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
	double score;

	void *mlx_ptr;
	void *win_ptr;
}                   t_fdf;

typedef struct      s_swap
{
	t_sort          *sort;
	t_sort          *sort2;
	t_fdf           *data;
	t_list          *instr;
	t_list          *instr_init;
	t_sort          *sort_init;
}                   t_swap;

void        		push_front(int data, int order, t_sort **sort);
void        		push_end(int data, int order, t_sort **sort);
t_sort      		*add_block(int data, int order);
int 				actual_command(char *buff);
int					check_args(int ac, char **av, t_sort **sort);
int					check_list(t_sort *sort, t_sort *sort2);
void 				delete_last(t_sort **sort);
void				delete_first(t_sort **sort);
void				swap(t_sort **sort);
t_sort 				*get_next(t_sort *map);
void				rotate(t_sort **sort);
void				rrotate(t_sort **sort);
void				do_action(char *buff, t_sort **sort, t_sort **sort2);
void				display_list(t_sort *sort);
void				push_swap(t_sort **sort, t_sort **sort2);
void				exit_error(char *str, t_sort **sort, t_sort **sort2);
void				check_choose(t_sort **sort, t_sort **sort2);
t_list				*parse_instr();
t_sort				*parse_args(int ac, char **av, t_sort **sort);
void				sort_del(t_sort **sort);
void                draw(t_fdf *data);

void                push_end_list(char *data, t_list **instr);

#endif

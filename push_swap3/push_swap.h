#ifndef PUSH_SWAP3_PUSH_SWAP_H
# define PUSH_SWAP3_PUSH_SWAP_H

# include "minilibx_macos/mlx.h"
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

typedef struct      s_swap
{
	t_sort          *sort;
	t_sort          *sort2;
	t_sort          *one;
	t_sort          *two;
	int             min;
	int             max;
	int             len;
	int             stack[3];
	int             count_one;
	int             count_two;
	int             op_a;
	int             op_b;
	int             dir_a;
	int             dir_b;
}                   t_swap;

int			        check_args(int k, char **arv, t_swap *swap);
void                push_front(int data, t_sort **sort);
void                push_end(int data, t_sort **sort);
int 		        count_len(t_sort *sort);
int                 do_action(char *buff, t_sort **sort, t_sort **sort2);
void                push_swap(t_sort **sort, t_sort **sort2, t_swap *swap);
void 		        delete_last(t_sort **sort);
void		        delete_first(t_sort **sort);
void		        swap(t_sort **sort);
t_sort 		        *get_next(t_sort *map);
void		        rotate(t_sort **sort);
void		        rrotate(t_sort **sort);

int                 find_min(t_sort **sort);
int                 find_max(t_sort **sort);
int 	            count_operations(t_sort *sort);
int		            count_op_prev(t_sort *sort);
int		            count_op_next(t_sort *sort);
int                 check_biggest(t_sort **sort, t_sort **sort2);
int                 check_smallest(t_sort **sort, t_sort **sort2);
void                insertion_push(t_swap *swap);
void                push_in_a(t_swap *swap, t_sort *need);
void                do_a(t_swap *swap);
void	            display_list(t_sort *sort);
void	            sort_del(t_sort **sort);
int			        check_list(t_sort *sort, t_sort *sort2);
void		        exit_error(char *str, t_swap *swap);
void                push_swap_min(t_swap *swap);
void		        parse_args(int k, char **arv, t_sort **sort);
void                massiv_del(char **arv);

#endif

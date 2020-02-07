#ifndef PUSHSWAP_PUSH_SWAP_H
#define PUSHSWAP_PUSH_SWAP_H

#include "../../gnl/get_next_line.h"
#include <stdio.h>


typedef struct      s_sort
{
	int             data;
	struct s_sort   *next;
	struct s_sort   *prev;
}                   t_sort;

typedef struct		s_act
{
	int op_a;
	int op_b;
	int str_a;
	int str_b;
}					t_act;
//1 - next
//0 - prev

void        push_front(int data, t_sort **sort);
void        push_end(int data, t_sort **sort);
t_sort      *add_block(int data);
int 		actual_command(char *buff);
int			check_args(int ac, char **av);
int			check_list(t_sort *sort, t_sort *sort2);
void 		delete_last(t_sort **sort);
void		delete_first(t_sort **sort);
void		swap(t_sort **sort);
t_sort 		*get_next(t_sort *map);
void		rotate(t_sort **sort);
void		rrotate(t_sort **sort);
int			do_action(char *buff, t_sort **sort, t_sort **sort2);
void		display_list(t_sort *sort);
int			push_swap(t_sort **sort, t_sort **sort2);
int			push_swap2(t_sort **sort, t_sort **sort2);
int 		count_len(t_sort *sort);
int 		push_swap_min(t_sort **sort, t_sort **sort2);
int			make_up(t_sort **sort, t_sort *tmp, int go);
int 		push_swap_five(t_sort **sort, t_sort **sort2);
int			count_op_prev(t_sort *sort);
int			count_op_next(t_sort *sort);
int 		make_up_a(t_sort **sort, t_sort **sort2, t_sort *tmp);
int			find_place2(t_sort **sort, t_sort **sort2);
int			find_place2_b(t_sort **sort, t_sort **sort2);
void		find_place3_b(t_sort **sort, t_sort **sort2);
int 		check_biggest(t_sort **sort, t_sort **sort2);
int			check_smallest(t_sort **sort, t_sort **sort2);
int			find_place3_b2(t_sort **walk, t_sort **sort2, t_act *act);

#endif

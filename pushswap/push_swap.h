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

void        push_front(int data, t_sort **sort);
void        push_end(int data, t_sort *sort);
t_sort      *add_block(int data);
int 		actual_command(char *buff);
int			check_args(int ac, char **av);
int			check_list(t_sort *sort, t_sort *sort2);
void 		delete_last(t_sort *sort);
void		delete_first(t_sort **sort);
void		swap(t_sort **sort);
t_sort 		*get_next(t_sort *map);
void		rotate(t_sort **sort);
void		rrotate(t_sort **sort);
int			do_action(char *buff, t_sort **sort, t_sort **sort2);
void		display_list(t_sort *sort);
int		push_swap(t_sort **sort, t_sort **sort2);
int		push_swap2(t_sort **sort, t_sort **sort2);

#endif

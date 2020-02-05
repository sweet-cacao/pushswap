#include "push_swap.h"

int 	push_swap_min(t_sort **sort, t_sort **sort2)
{
	t_sort *tmp;

	tmp = (*sort);
	if ((tmp->data < tmp->next->next->data) && (tmp->data > tmp->next->data))
	{
		do_action("sa", sort, sort2);
	}
	if ((tmp->data > tmp->next->next->data) && (tmp->data > tmp->next->data))
	{

	}
	if ((tmp->data > tmp->next->next->data) && (tmp->data < tmp->next->data))
	{

	}
	if ((tmp->data < tmp->next->next->data) && (tmp->data < tmp->next->data))
	{

	}
}


#include "push_swap.h"

void swap_three(t_sort **sort, t_sort **sort2)
{
	t_sort *tmp;

	tmp = (*sort);
	if ((tmp->data < tmp->next->next->data) && (tmp->data > tmp->next->data))
		do_action("sa", sort, sort2);
	else if ((tmp->data > tmp->next->next->data) && (tmp->data > tmp->next->data)
	&& (tmp->next->data > tmp->next->next->data))
	{
		do_action("sa", sort, sort2);
		do_action("rra", sort, sort2);
	}
	else if ((tmp->data > tmp->next->next->data) && (tmp->data > tmp->next->data)
	&& (tmp->next->data < tmp->next->next->data))
		do_action("ra", sort, sort2);
	else if ((tmp->data > tmp->next->next->data) && (tmp->data < tmp->next->data))
		do_action("rra", sort, sort2);
	else if ((tmp->data < tmp->next->next->data) && (tmp->data < tmp->next->data)
	&& (tmp->next->data > tmp->next->next->data))
	{
		do_action("sa", sort, sort2);
		do_action("ra", sort, sort2);
	}
}

void    push_swap_min(t_swap *swap)
{
	if (count_len(swap->sort) == 5)
	{
		do_action("pb", &swap->sort, &swap->sort2);
		do_action("pb", &swap->sort, &swap->sort2);
	}
	swap_three(&swap->sort, &swap->sort2);
	insertion_push(swap);
}
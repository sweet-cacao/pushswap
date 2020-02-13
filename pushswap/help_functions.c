#include "push_swap.h"

int		count_op_prev(t_sort *sort)
{
	t_sort *tmp;
	int op;

	op = 0;
	tmp = sort;
	while(tmp)
	{
		op++;
		tmp = tmp->prev;
	}
	op--;
	return (op);
}

int		count_op_next(t_sort *sort)
{
	t_sort *tmp;
	int op;

	op = 0;
	tmp = sort;
	while(tmp)
	{
		op++;
		tmp = tmp->next;
	}
	return (op);
}

int 	count_operations(t_sort *sort)
{
	int op_next;
	int op_prev;

	op_next = count_op_next(sort);
	op_prev = count_op_prev(sort);
	if (op_next <= op_prev)
		return op_next;
	else
		return op_prev;
}

int     find_min(t_sort **sort)
{
	t_sort  *tmp;
	int     min = INT32_MAX;
	tmp = (*sort);
	while(tmp)
	{
		if (tmp->data < min)
			min = tmp->data;
		tmp = tmp->next;
	}
	return (min);
}

int     find_max(t_sort **sort)
{
	t_sort  *tmp;
	int     max = INT32_MIN;
	tmp = (*sort);
	while(tmp)
	{
		if (tmp->data > max)
			max = tmp->data;
		tmp = tmp->next;
	}
	return (max);
}

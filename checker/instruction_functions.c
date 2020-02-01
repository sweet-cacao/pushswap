#include "push_swap.h"

void	swap(t_sort **sort)
{
	t_sort *tmp;

	tmp = (*sort)->next;
	push_front(tmp->data, sort);
	(*sort)->next->next = (*sort)->next->next->next;
	(*sort)->next->next->prev = (*sort)->next;
}

void	rotate(t_sort **sort)
{
	t_sort *tmp2;

	tmp2 = (*sort);
	delete_first(sort);
	push_end(tmp2->data, *sort);
}

void	rrotate(t_sort **sort)
{
	t_sort *tmp;

	tmp = (*sort);
	tmp = get_next(tmp);
	delete_last(*sort);
	push_front(tmp->data, sort);
}

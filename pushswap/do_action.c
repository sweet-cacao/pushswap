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

void	do_action(char *buff, t_sort **sort, t_sort **sort2)
{
	t_sort *tmp;

	if (!ft_strcmp(buff, "sa"))
	{
		if ((*sort) && (*sort)->next)
		{
			swap(sort);
		}
	}
	if (!ft_strcmp(buff, "sb"))
	{
		if ((*sort2) && (*sort2)->next)
		{
			swap(sort2);
		}
	}
	if (!ft_strcmp(buff, "ss"))
	{
		if ((*sort2) && (*sort2)->next && (*sort) && (*sort)->next)
		{
			swap(sort);
			swap(sort2);
		}
	}
	if (!ft_strcmp(buff, "pa"))
	{
		if ((*sort2))
		{
			tmp = (*sort2);
			delete_first(sort2);
			push_front(tmp->data, sort);
		}
	}
	if (!ft_strcmp(buff, "pb"))
	{
		if (*sort)
		{
			tmp = (*sort);
			delete_first(sort);
			push_front(tmp->data, sort2);

		}
	}
	if ((*sort) && (*sort)->next)
	{
		if (!ft_strcmp(buff, "ra"))
			rotate(sort);
		if (!ft_strcmp(buff, "rra"))
			rrotate(sort);
	}
	if ((*sort2) && (*sort2)->next)
	{
		if (!ft_strcmp(buff, "rb"))
			rotate(sort2);
		if (!ft_strcmp(buff, "rrb"))
			rrotate(sort2);
	}
	if ((*sort2) && (*sort2)->next && (*sort) && (*sort)->next)
	{
		if (!ft_strcmp(buff, "rr"))
		{
			rotate(sort);
			rotate(sort2);
		}
		if (!ft_strcmp(buff, "rrr"))
		{
			rrotate(sort);
			rrotate(sort2);
		}
	}
}
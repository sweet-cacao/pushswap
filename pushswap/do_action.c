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
	push_end(tmp2->data, sort);
}

void	rrotate(t_sort **sort)
{
	t_sort *tmp;

	tmp = (*sort);
	tmp = get_next(tmp);
	push_front(tmp->data, sort);
	delete_last(sort);
}

int	do_action(char *buff, t_sort **sort, t_sort **sort2)
{
	static int g_h;
	t_sort *tmp;

	if (ft_strcmp(buff, "sa") == 0)
	{
		if ((*sort) && (*sort)->next)
		{
			g_h++;
			printf("sa\n");
			swap(sort);
			display_list(*sort);
		}
	}
	if (ft_strcmp(buff, "sb") == 0)
	{
		if ((*sort2) && (*sort2)->next)
		{
			g_h++;
			printf("sb");
			swap(sort2);
		}
	}
	if (ft_strcmp(buff, "ss") == 0)
	{
		if ((*sort2) && (*sort2)->next && (*sort) && (*sort)->next)
		{
			g_h++;
			printf("ss");
			swap(sort);
			swap(sort2);
		}
	}
	if (ft_strcmp(buff, "pa") == 0)
	{
		if ((*sort2))
		{
			g_h++;
			printf("pa\n");
			tmp = (*sort2);
			delete_first(sort2);
			push_front(tmp->data, sort);
			printf("a\n");
			display_list(*sort);
			printf("b\n");
			display_list(*sort2);
		}
	}
	if (ft_strcmp(buff, "pb") == 0)
	{
		if (*sort)
		{
			g_h++;
			printf("pb\n");
			tmp = (*sort);
			int k = tmp->data;
			delete_first(sort);
			push_front(k, sort2);
			printf("a\n");
			display_list(*sort);
			printf("b\n");
			display_list(*sort2);

		}
	}
	if ((*sort) && (*sort)->next)
	{
		if (ft_strcmp(buff, "ra") == 0)
		{
			g_h++;
			printf("ra\n");
			rotate(sort);
			printf("a\n");
			display_list(*sort);
		}
		if (ft_strcmp(buff, "rra") == 0)
		{
			g_h++;
			printf("rra\n");
			rrotate(sort);
			printf("a\n");
			display_list(*sort);
		}
	}
	if ((*sort2) && (*sort2)->next)
	{
		if (ft_strcmp(buff, "rb") == 0)
		{
			g_h++;
			printf("rb\n");
			rotate(sort2);
			printf("b\n");
			display_list(*sort2);
		}
		if (ft_strcmp(buff, "rrb") == 0)
		{
			g_h++;
			printf("rrb\n");
			rrotate(sort2);
			printf("b\n");
			display_list(*sort2);
		}

	}
	if ((*sort2) && (*sort2)->next && (*sort) && (*sort)->next)
	{
		if (ft_strcmp(buff, "rr") == 0)
		{
			g_h++;
			printf("rr");
			rotate(sort);
			rotate(sort2);
		}
		if (ft_strcmp(buff, "rrr") == 0)
		{
			g_h++;
			printf("rrr");
			rrotate(sort);
			rrotate(sort2);
		}
	}
	return (g_h);
}

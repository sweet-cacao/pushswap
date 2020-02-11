#include "push_swap.h"


int 	push_swap_min(t_sort **sort, t_sort **sort2)
{
	t_sort *tmp;
	int p;

	p = 0;
	tmp = (*sort);
	if ((tmp->data < tmp->next->next->data) && (tmp->data > tmp->next->data))
	{
		return (p = do_action("sa", sort, sort2));
	}
	if ((tmp->data > tmp->next->next->data) && (tmp->data > tmp->next->data) && (tmp->next->data > tmp->next->next->data))
	{
		do_action("sa", sort, sort2);
		return (p = do_action("rra", sort, sort2));
	}
	if ((tmp->data > tmp->next->next->data) && (tmp->data > tmp->next->data) && (tmp->next->data < tmp->next->next->data))
	{
		return (p = do_action("ra", sort, sort2));
	}
	if ((tmp->data > tmp->next->next->data) && (tmp->data < tmp->next->data))
	{
		return (p = do_action("rra", sort, sort2));
	}
	if ((tmp->data < tmp->next->next->data) && (tmp->data < tmp->next->data) && (tmp->next->data > tmp->next->next->data))
	{
		do_action("sa", sort, sort2);
		return (p = do_action("ra", sort, sort2));
	}
	return (p);
}

int 	make_up_a(t_sort **sort, t_sort **sort2, t_sort *tmp)
{
	int op_next;
	int op_prev;
	char *str = malloc(sizeof(char) * 5);
	int i;
//	char *instr[1000];
	int j;

	if (tmp == NULL || sort == NULL)
		return (0);
	i = 0;
	j = 0;
	op_next = count_op_next(tmp);
	op_prev = count_op_prev(tmp);
	str = op_next <= op_prev ? "next" : "prev";
	if (ft_strcmp("next", str) == 0)
	{
		while (i < op_next)
		{
			j = do_action("rra", sort, sort2);
			i++;
		}
	}
	if (ft_strcmp("prev", str) == 0)
	{
		while (i < op_prev)
		{
			j = do_action("ra",  sort, sort2);
			i++;

		}
	}
	return (j);
}

int 	make_up_b(t_sort **sort, t_sort **sort2, t_sort *tmp)
{
	int op_next;
	int op_prev;
	char *str = malloc(sizeof(char) * 5);
	int i;
//	char *instr[1000];
	int j;

	if (tmp == NULL || sort == NULL)
		return (0);
	i = 0;
	j = 0;
	op_next = count_op_next(tmp);
	op_prev = count_op_prev(tmp);
	str = op_next <= op_prev ? "next" : "prev";
	if (ft_strcmp("next", str) == 0)
	{
		while (i < op_next)
		{
			j = do_action("rrb", sort, sort2);
			i++;
		}
	}
	if (ft_strcmp("prev", str) == 0)
	{
		while (i < op_prev)
		{
			j = do_action("rb",  sort, sort2);
			i++;
		}
	}
	return (j);
}

int 	find_place(t_sort **sort, t_sort **sort2)
{
	t_sort *tmp;
	t_sort *need;
	int max;
	tmp = (*sort);
	need = NULL;
	max = INT32_MIN;
	while (tmp)
	{
		if (((tmp->data - (*sort2)->data) > max) && (tmp->data - (*sort2)->data) > 0)
		{
			max = (tmp->data - (*sort2)->data);
			need = tmp;
		}
		tmp = tmp->next;
	}
	if (need != NULL)
	{
		make_up_a(sort, sort2, need);
		do_action("rra",  sort, sort2);
	}
	max = do_action("pa", sort, sort2);
/*	}
	if (need == NULL)
	{
		max = do_action("pa", sort, sort2);
	}*/
	return (max);
}

int			find_place2(t_sort **sort, t_sort **sort2)
{
	t_sort 	*tmp;
	t_sort 	*need;
	int 	op;
	int j;

	op = 0;
	tmp = (*sort);
	need = NULL;
	while ((*sort2)->data > tmp->data)
	{
		need = tmp;
		op++;
		tmp = tmp->next;
	}

	if (need != NULL)
	{
		make_up_a(sort, sort2, tmp);
	}
	j = do_action("pa", sort, sort2);
	return (j);
}

int			find_place2_b(t_sort **sort, t_sort **sort2)
{
	t_sort 	*tmp;
	t_sort	*tmp2;
	t_sort 	*need;
	int 	op;
	int j;

	j = 0;
	op = 0;
	tmp = (*sort2);
	tmp2 = (*sort2);
	need = NULL;
	if (!sort || !sort2 || !(*sort2) || !(*sort) || !tmp)
		return (0);
	while (tmp && (*sort)->data < tmp->data)
	{
		need = tmp;
		op++;
		tmp = tmp->next;
	}
	if (need != NULL)
	{
		j = make_up_b(sort, sort2, tmp);
	}
	make_up_b(sort, sort2, tmp2);
	return (j);
}

int 	make_sorted(t_sort **sort, t_sort **sort2)
{
	t_sort *tmp;
	t_sort *need;
	int min;
	int j;

	j = 0;
	tmp = (*sort);
	min = INT32_MAX;
	need = NULL;
	while (tmp)
	{
		if (tmp->data <= min)
		{
			min = tmp->data;
			need = tmp;
		}
		tmp = tmp->next;
	}
	if (need != NULL)
		j = make_up_a(sort, sort2, need);
	return (j);
}

int check_biggest(t_sort **sort, t_sort **sort2)
{
	t_sort 	*tmp;
	int big;
	tmp = (*sort2);
	while (tmp)
	{
		if ((*sort)->data < tmp->data)
			return (1);
		tmp=tmp->next;
	}
	return (0);
}

int check_smallest(t_sort **sort, t_sort **sort2)
{
	t_sort 	*tmp;
	int small;
	tmp = (*sort2);
	while (tmp)
	{
		if ((*sort)->data > tmp->data)
			return (1);
		tmp=tmp->next;
	}
	return (0);
}

void			find_place3_b(t_sort **sort, t_sort **sort2)
{
	t_sort 	*tmp;
	t_sort 	*need;
	int 	op;

	tmp = (*sort2);
	need = NULL;
	if (check_biggest(sort, sort2) && check_smallest(sort, sort2))
	{
		while (tmp && (*sort)->data > tmp->data)
		{
			tmp = tmp->next;
			need = tmp;
		}
//		if (need != NULL)
//			need = tmp->next;
		if (need == NULL)
		{
			while (tmp && (*sort)->data < tmp->data)
			{
				tmp = tmp->next;
				need = tmp;
			}
			while (tmp && (*sort)->data > tmp->data)
			{
				tmp = tmp->next;
				need = tmp;
			}
		}
		if (need != NULL)
			make_up_b(sort, sort2, need);
	}
	else if (check_biggest(sort, sort2))
	{
		make_sorted(sort2, sort2);
	}
	else if (check_smallest(sort, sort2))
	{
		make_sorted(sort2, sort2);
	}
	do_action("pb", sort, sort2);
}

/*
/*
int 	push_swap_five(t_sort **sort, t_sort **sort2)
{
	t_sort *tmp;
	t_sort *need;
	int otv;

	do_action("pb", sort, sort2);
	do_action("pb", sort, sort2);
	push_swap_min(sort, sort2);
	find_place(sort, sort2);
	otv = find_place(sort, sort2);
	return (otv);
}
*/



int 	push_swap_five(t_sort **sort, t_sort **sort2)
{
	t_sort *tmp;
	t_sort *need;
	int otv;

	do_action("pb", sort, sort2);
	do_action("pb", sort, sort2);
	push_swap_min(sort, sort2);
	find_place2(sort, sort2);
	find_place2(sort, sort2);
	make_sorted(sort, sort2);
	otv = do_action("rb", sort, sort2);
	return (otv);
}
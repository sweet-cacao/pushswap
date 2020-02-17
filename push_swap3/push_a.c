#include "push_swap.h"

int         make_up_a_count(t_sort *need, t_swap *swap)
{
	int op_next;
	int op_prev;
	char *str;
	int j;

	if (need == NULL)//|| swap->sort == NULL)
		return (0);
	j = 0;
	op_next = count_op_next(need);
	op_prev = count_op_prev(need);
	str = op_next <= op_prev ? "next" : "prev";
	if (ft_strcmp("next", str) == 0)
	{
		swap->op_a = op_next;
		swap->dir_a = 1;
		return (op_next);
	}
	if (ft_strcmp("prev", str) == 0)
	{
		swap->op_a = op_prev;
		swap->dir_a = 0;
		return (op_prev);
	}
	return (j);
}

int         make_up_b_count(t_sort *need, t_swap *swap)
{
	int op_next;
	int op_prev;
	char *str;
	int j;

	if (need == NULL)//|| swap->sort == NULL)
		return (0);
	j = 0;
	op_next = count_op_next(need);
	op_prev = count_op_prev(need);
	str = op_next <= op_prev ? "next" : "prev";
	if (ft_strcmp("next", str) == 0)
	{
		swap->op_b = op_next;
		swap->dir_b = 1;
		return (op_next);
	}
	if (ft_strcmp("prev", str) == 0)
	{
		swap->op_b = op_prev;
		swap->dir_b = 0;
		return (op_prev);
	}
	return (j);
}

int     make_sorted_a_count(t_swap *swap)
{
	t_sort *tmp;
	t_sort *need;
	int min;
	int j;

	j = 0;
	tmp = (swap->sort);
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
		j = make_up_a_count(need, swap);
	return (j);
}

int         find_place_in_a_count(t_sort *walk, t_swap *swap)
{
	t_sort 	*tmp;
	t_sort 	*need;
	int 	op;

	tmp = (swap->sort);
	need = NULL;
	op = 0;
	if (check_biggest(&walk, &swap->sort) && check_smallest(&walk, &swap->sort))
	{
		while (tmp && walk->data > tmp->data)
		{
			tmp = tmp->next;
			need = tmp;
		}

		if (need == NULL)
		{
			while (tmp && walk->data < tmp->data)
			{
				tmp = tmp->next;
					need = tmp;
			}
			while (tmp && walk->data > tmp->data)
			{
				tmp = tmp->next;
				need = tmp;
			}
		}
		if (need != NULL)
			op = make_up_a_count(need, swap);
	}
	else if (check_biggest(&walk, &swap->sort))
		op = make_sorted_a_count(swap);
	else if (check_smallest(&walk, &swap->sort))
		op = make_sorted_a_count(swap);
	else
		swap->op_a = 0;
	return (op);
}

void        insertion_push(t_swap *swap)
{
	int     op;
	t_sort  *tmp;
	t_sort  *need;

	tmp = swap->sort2;
	need = NULL;
	while (swap->sort2)
	{
		swap->min = INT32_MAX;
		while(tmp)
		{
			op = find_place_in_a_count(tmp, swap) + make_up_b_count(tmp, swap);
			if (op < swap->min)
			{
				swap->min = op;
				need = tmp;
			}
			tmp = tmp->next;
		}
		swap->op_a = find_place_in_a_count(need, swap);
		swap->op_b =  make_up_b_count(need, swap);
		op = swap->op_a + swap->op_b;
		//find_place_in_a_count(need, swap);
		if (op != 0)
		{
		//	make_up_b_count(need, swap);
			push_in_a(swap, need);
		}
		if (op == 0)
			do_action("pa", &swap->sort, &swap->sort2);
		tmp = swap->sort2;
	}
	make_sorted_a_count(swap);
	do_a(swap);
//	sort_del(&tmp);
}


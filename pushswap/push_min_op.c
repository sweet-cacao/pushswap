#include "push_swap.h"

int 	make_up_a2(t_sort **sort, t_sort **sort2, t_sort *tmp, t_act *act)
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
		act->str_b = 1;
		return (op_next);
	}
	if (ft_strcmp("prev", str) == 0)
	{
		act->str_b = 0;
		return (op_prev);
	}
	return (j);
}

int 	make_sorted3(t_sort **sort, t_sort **sort2, t_act *act)
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
		j = make_up_a2(sort, sort, need, act); //костыль, потому что передается сразу сорт2 2 раза
	return (j);
}

int			find_place3_a(t_sort **walk, t_sort **sort, t_act *act)
{
	t_sort 	*tmp;
	t_sort 	*need;
	int 	op;

	tmp = (*sort);
	need = NULL;
	op = 0;
	if (check_biggest(walk, sort) && check_smallest(walk, sort))
	{
		while (tmp && (*walk)->data > tmp->data)
		{
			tmp = tmp->next;
			need = tmp;
		}
//		if (need != NULL)
//			need = tmp->next;
		if (need == NULL)
		{
			while (tmp && (*walk)->data < tmp->data)
			{
				tmp = tmp->next;
				need = tmp;
			}
			while (tmp && (*walk)->data > tmp->data)
			{
				tmp = tmp->next;
				need = tmp;
			}
		}
		if (need != NULL)
			op = make_up_a2(walk, sort, need, act);
	}
	else if (check_biggest(walk, sort))
	{
		op = make_sorted3(sort, sort, act);
	}
	else if (check_smallest(walk, sort))
	{
		op = make_sorted3(sort, sort, act);
	}
	return (op);
}

int push_min_op(t_sort **sort, t_sort **sort2)
{
	int op;
	t_sort *tmp;
	t_act act;
	t_sort *need;
//	int first;
//	int second;
	int min;

	min = INT32_MAX;
	tmp = (*sort2);
	while ((*sort2))
	{
        min = INT32_MAX;
		while (tmp)
		{
			op = find_place3_a(&tmp, sort, &act) + make_up_a2(sort, sort2, tmp, &act);
			if (op < min)
			{
		//		first = find_place3_a(&tmp, sort, &act);
		//		second = make_up_a2(sort, sort2, tmp, &act);
				min = op;
				need = tmp;
			}
			tmp = tmp->next;
		}
//		clear_make(sort, sort2, need);
		make_up_b(sort2, sort2, need);
		find_place3_b(sort2, sort);
		tmp = (*sort2);
	}
	make_sorted(sort, sort2);
	return (do_action("pa", sort,  sort2));
}
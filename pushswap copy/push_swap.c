#include "push_swap.h"

t_sort 	*find_last(int stack_last, t_sort *sort, int min, int max)
{
	t_sort *tmp;
	t_sort *tmp2;

	tmp2 = NULL;
	tmp = get_next(sort);
	while(tmp)
	{
		if (tmp->data < stack_last)
		{
			if (tmp->data != min && tmp->data != max)
			{
				tmp2 = tmp;
				return (tmp2);
			}
		}
		tmp = tmp->prev;
	}
	return (tmp2);
}

t_sort 	*find_first(int stack_last, t_sort *sort, int min, int max)
{
	t_sort *tmp;

	tmp = sort;
	while(tmp)
	{
		if (tmp->data != min && tmp->data != max)
		{
			if (tmp->data < stack_last)
				return (tmp);
		}
		tmp = tmp->next;
	}
	return (tmp);
}

void 	choose_number(t_sort **sort, t_sort **sort2, int count_one, int count_two, t_sort *one, t_sort *two)
{
	int op_next;
	int op_prev;
	char *str;
	int i;

	i = 0;
	if (count_one == count_two)
	{
		if (one->data < two->data)
			count_one = INT32_MIN;
		else
			count_two = INT32_MIN;
	}
	if (count_one < count_two)
	{
		op_next = count_op_next(one);
		op_prev = count_op_prev(one);
		str = op_next <= op_prev ? "next" : "prev";
		if (ft_strcmp("next", str) == 0)
		{
			while (i < op_next)
			{
				if (sort && sort2 && (*sort) && (*sort2) && (*sort)->next && (*sort2)->next) {
					if (((*sort)->next->data - (*sort)->data) < 10 && ((*sort)->next->data - (*sort)->data > 0) &&
					    ((*sort2)->next->data - (*sort2)->data) > -10 && ((*sort2)->next->data - (*sort2)->data < 0))
						do_action("ss", sort, sort2);
					if ((*sort2)->next && ((*sort)->next->data - (*sort)->data) < 10 &&
					    ((*sort)->next->data - (*sort)->data > 0))
						do_action("sa", sort, sort2);
				}
				do_action("rra", sort, sort2);
				i++;
			}
		}
		if (ft_strcmp("prev", str) == 0)
		{
			while (i < op_prev)
			{
				if (sort && sort2 && (*sort) && (*sort2) && (*sort)->next && (*sort2)->next) {
					if ((sort2) && (*sort2) && (*sort)->next && ((*sort)->next->data - (*sort)->data) < 10 &&
					    ((*sort)->next->data - (*sort)->data > 0) && ((*sort2)->next->data - (*sort2)->data) > -10 &&
					    ((*sort2)->next->data - (*sort2)->data < 0))
						do_action("ss", sort, sort2);
					if ((sort2) && (*sort2) && (*sort)->next && ((*sort)->next->data - (*sort)->data) < 10 &&
					    ((*sort)->next->data - (*sort)->data > 0))
						do_action("sa", sort, sort2);
				}
				do_action("ra", sort, sort2);
				i++;
			}
		}
		if (sort2 && (*sort2) && ((*sort2)->next))
		{
			if (((*sort2)->data > one->data))
			{
				do_action("rb", sort, sort2);
			}
		}
		if (sort2 && (*sort2) && ((*sort2)->next))
		{
			if (((*sort2)->data > one->data))
			{
				do_action("rb", sort, sort2);
			}
		}
		do_action("pb", sort, sort2);
	}
	else
	{
		op_next = count_op_next(two);
		op_prev = count_op_prev(two);
		str = op_next <= op_prev ? "next" : "prev";
		if (ft_strcmp("next", str) == 0)
		{
				while (i < op_next)
				{
					if (sort && sort2 && (*sort) && (*sort2) && (*sort)->next && (*sort2)->next)
					{
						if (((*sort)->next->data - (*sort)->data) < 10 && ((*sort)->next->data - (*sort)->data > 0) &&
						    ((*sort2)->next->data - (*sort2)->data) > -10 &&
						    ((*sort2)->next->data - (*sort2)->data < 0))
							do_action("ss", sort, sort2);
						if (((*sort)->next->data - (*sort)->data) < 10 && ((*sort)->next->data - (*sort)->data > 0))
							do_action("sa", sort, sort2);
					}
				    do_action("rra", sort, sort2);
				    i++;
				}
		}
		if (ft_strcmp("prev", str) == 0)
		{
		    while (i < op_prev)
		    {
			    if (sort && sort2 && (*sort) && (*sort2) && (*sort)->next && (*sort2)->next)
			    {
				    if (((*sort)->next->data - (*sort)->data) < 10 && ((*sort)->next->data - (*sort)->data > 0) &&
				        ((*sort2)->next->data - (*sort2)->data) > -10 && ((*sort2)->next->data - (*sort2)->data < 0))
					    do_action("ss", sort, sort2);
				    if (((*sort)->next->data - (*sort)->data) < 10 && ((*sort)->next->data - (*sort)->data > 0))
					    do_action("sa", sort, sort2);
			    }
				do_action("ra", sort, sort2);
				i++;
		    }
		}
		if (sort2 && (*sort2) && ((*sort2)->next))
		{
			if (((*sort2)->data > one->data))
			{
				do_action("rb", sort, sort2);
			}
		}
    	if (sort2 && (*sort2) && ((*sort2)->next))
		{
			if (((*sort2)->data > one->data))
			{
				do_action("rb", sort, sort2);
			}
		}
		do_action("pb", sort, sort2);
	}
}




int	push_swap2(t_sort **sort, t_sort **sort2)
{
	t_sort *tmp;
	t_sort *one;
	t_sort *two;
	int max = INT32_MIN;
	int count_one;
	int count_two;
	int min;
	int maxim;
	int len;
	int stack[3];//={166, 332, 500};
//	int stack[11] = {45, 90, 135, 180, 225, 270, 315, 360, 405, 450, 500};
//	int stack[25] = {60, 105, 150, 195, 240, 280, 325, 370, 415, 450, 500};
//	int stack[25] = {20, 40, 60, 80, 100, 120, 140, 150, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 500};
	int i;
	i = 0;
	min = find_min(sort);
	maxim = find_max(sort);
	len = (min * (-1)) + maxim;
	stack[0] = min + len / 3;
	stack[1] = stack[0] + len / 3;
	stack[2] = maxim;
	while (i < 3) //для каждой группы выполняем необходимый код
	{
		one = find_first(stack[i], *sort, min, maxim);
		while (one != NULL)
		{
		    if ((*sort)->next->next == NULL)
		        break;
			one = find_first(stack[i], *sort, min, maxim);
			if (one == NULL)
				break;
			two = find_last(stack[i], *sort, min, maxim);
			count_one = count_operations(one);
			if (two == NULL)
			{
				choose_number(sort, sort2, count_one, INT32_MAX, one, two);
				break;
			}
			count_two = count_operations(two);
			choose_number(sort, sort2, count_one, count_two, one, two);
		}
		i++;
	}


 /*while ((*sort)->next->next)
	{
        if ((*sort)->next->next == NULL)
            break;
        if ((*sort)->data == 0 || (*sort)->data == 500)
            do_action("ra", sort, sort2);
		if (((*sort)->data) < 250 && (*sort)->data != 0 && (*sort)->data != 500)
			do_action("pb", sort, sort2);
		else
		{
		    if ((*sort)->data != 0 && (*sort)->data != 500)
		    {
                do_action("pb", sort, sort2);
                do_action("rb", sort, sort2);
            }
		}
	}*/
//	int p = last_make_up(sort, sort2);
	int p = push_min_op(sort, sort2);
//	int p = push_everything(sort, sort2);// для первого сортировочного алгоритма
	return (p);
}
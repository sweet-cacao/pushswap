/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <gstarvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:01:36 by gstarvin          #+#    #+#             */
/*   Updated: 2020/02/19 21:59:42 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_sort	*find_last(int stack_last, t_sort *sort, int min, int max)
{
	t_sort *tmp;
	t_sort *tmp2;

	tmp2 = NULL;
	tmp = get_next(sort);
	while (tmp)
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

t_sort	*find_first(int stack_last, t_sort *sort, int min, int max)
{
	t_sort *tmp;

	tmp = sort;
	while (tmp)
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

t_sort	*choose_one_two(t_swap *swap)
{
	if (swap->count_one == swap->count_two)
	{
		if (swap->one->data < swap->two->data)
			swap->count_one = INT32_MIN;
		else
			swap->count_two = INT32_MIN;
	}
	if (swap->count_one < swap->count_two)
		return (swap->one);
	else
		return (swap->two);
}

void	choose_number(t_swap *swap)
{
	t_sort	*tmp;
	int		op_next;
	int		op_prev;
	char	*str;
	int		i;

	i = 0;
	tmp = choose_one_two(swap);
	op_next = count_op_next(tmp);
	op_prev = count_op_prev(tmp);
	str = op_next <= op_prev ? "next" : "prev";
	if (ft_strcmp("next", str) == 0)
		while_act("rra", swap, op_next);
	if (ft_strcmp("prev", str) == 0)
		while_act("ra", swap, op_prev);
	do_action("pb", &swap->sort, &swap->sort2);
	if (swap->sort2 && ((swap->sort2)->next))
	{
		if (swap->sort2->data < swap->stack[0])
		{
			do_action("rb", &swap->sort, &swap->sort2);
		}
	}
}

void	push_swap(t_sort **sort, t_swap *swap)
{
	int i;

	i = 0;
	get_max_min_len(swap);
	while (i++ < 3)
	{
		swap->one = find_first(swap->stack[i], *sort, swap->min, swap->max);
		while (swap->one != NULL && (*sort)->next->next)
		{
			swap->one = find_first(swap->stack[i], *sort, swap->min, swap->max);
			if (swap->one == NULL)
				break ;
			swap->two = find_last(swap->stack[i], *sort, swap->min, swap->max);
			swap->count_one = count_operations(swap->one);
			if (swap->two == NULL)
			{
				swap->count_two = INT32_MAX;
				choose_number(swap);
				break ;
			}
			swap->count_two = count_operations(swap->two);
			choose_number(swap);
		}
	}
	insertion_push(swap);
}

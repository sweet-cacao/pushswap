/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <gstarvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 20:00:40 by gstarvin          #+#    #+#             */
/*   Updated: 2020/02/19 21:42:27 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		find_min(t_sort **sort)
{
	t_sort	*tmp;
	int		min;

	min = INT32_MAX;
	tmp = (*sort);
	while (tmp)
	{
		if (tmp->data < min)
			min = tmp->data;
		tmp = tmp->next;
	}
	return (min);
}

int		find_max(t_sort **sort)
{
	t_sort	*tmp;
	int		max;

	max = INT32_MIN;
	tmp = (*sort);
	while (tmp)
	{
		if (tmp->data > max)
			max = tmp->data;
		tmp = tmp->next;
	}
	return (max);
}

int		make_up_a_count(t_sort *need, t_swap *swap)
{
	int		op_next;
	int		op_prev;
	char	*str;
	int		j;

	if (need == NULL)
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

int		make_up_b_count(t_sort *need, t_swap *swap)
{
	int		op_next;
	int		op_prev;
	char	*str;
	int		j;

	if (need == NULL)
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

int		make_sorted_a_count(t_swap *swap)
{
	t_sort	*tmp;
	t_sort	*need;
	int		min;
	int		j;

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

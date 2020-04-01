/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_min.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <gstarvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:07:11 by gstarvin          #+#    #+#             */
/*   Updated: 2020/02/19 19:09:56 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	action_three(t_sort **sort, t_sort **sort2)
{
	do_action("sa", sort, sort2);
	do_action("ra", sort, sort2);
}

void	swap_three(t_sort **sort, t_sort **sort2)
{
	t_sort *tmp;

	tmp = (*sort);
	if ((tmp->data < tmp->next->next->data) && (tmp->data > tmp->next->data))
		do_action("sa", sort, sort2);
	else if ((tmp->data > tmp->next->next->data)
	&& (tmp->data > tmp->next->data)
	&& (tmp->next->data > tmp->next->next->data))
	{
		do_action("sa", sort, sort2);
		do_action("rra", sort, sort2);
	}
	else if ((tmp->data > tmp->next->next->data)
	&& (tmp->data > tmp->next->data)
	&& (tmp->next->data < tmp->next->next->data))
		do_action("ra", sort, sort2);
	else if ((tmp->data > tmp->next->next->data)
	&& (tmp->data < tmp->next->data))
		do_action("rra", sort, sort2);
	else if ((tmp->data < tmp->next->next->data)
	&& (tmp->data < tmp->next->data)
	&& (tmp->next->data > tmp->next->next->data))
		action_three(sort, sort2);
}

void	push_swap_min(t_swap *swap)
{
	if (count_len(swap->sort) == 5)
	{
		do_action("pb", &swap->sort, &swap->sort2);
		do_action("pb", &swap->sort, &swap->sort2);
	}
	swap_three(&swap->sort, &swap->sort2);
	insertion_push(swap);
}

void	while_act(char *buff, t_swap *swap, int op)
{
	int i;

	i = 0;
	while (i < op)
	{
		do_action(buff, &swap->sort, &swap->sort2);
		i++;
	}
}

void	get_max_min_len(t_swap *swap)
{
	swap->min = find_min(&swap->sort);
	swap->max = find_max(&swap->sort);
	if (swap->min < 0)
		swap->len = (swap->min * (-1)) + swap->max;
	else
		swap->len = swap->max - swap->min;
	swap->stack[0] = swap->min + swap->len / 3;
	swap->stack[1] = swap->stack[0] + swap->len / 3;
	swap->stack[2] = swap->max;
}

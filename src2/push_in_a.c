/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_in_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <gstarvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 21:07:07 by gstarvin          #+#    #+#             */
/*   Updated: 2020/02/19 21:59:07 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_a(t_swap *swap)
{
	while (swap->op_a > 0)
	{
		if (swap->dir_a == 1)
			do_action("rra", &swap->sort, &swap->sort2);
		else
			do_action("ra", &swap->sort, &swap->sort2);
		swap->op_a--;
	}
}

void	do_b(t_swap *swap)
{
	while (swap->op_b > 0)
	{
		if (swap->dir_b == 1)
			do_action("rrb", &swap->sort, &swap->sort2);
		else
			do_action("rb", &swap->sort, &swap->sort2);
		swap->op_b--;
	}
}

void	do_both_bigger(t_swap *swap)
{
	while (swap->op_b > 0)
	{
		if (swap->dir_a == 1)
			do_action("rrr", &swap->sort, &swap->sort2);
		else
			do_action("rr", &swap->sort, &swap->sort2);
		swap->op_b--;
		swap->op_a--;
	}
}

void	do_both(t_swap *swap)
{
	if (swap->op_a > swap->op_b)
	{
		do_both_bigger(swap);
		do_a(swap);
	}
	else
	{
		while (swap->op_a > 0)
		{
			if (swap->dir_a == 1)
				do_action("rrr", &swap->sort, &swap->sort2);
			else
				do_action("rr", &swap->sort, &swap->sort2);
			swap->op_b--;
			swap->op_a--;
		}
		do_b(swap);
	}
}

void	push_in_a(t_swap *swap, t_sort *need)
{
	if (need == NULL)
		return ;
	if (swap->dir_a == swap->dir_b)
	{
		do_both(swap);
	}
	else
	{
		do_a(swap);
		do_b(swap);
	}
	do_action("pa", &swap->sort, &swap->sort2);
}

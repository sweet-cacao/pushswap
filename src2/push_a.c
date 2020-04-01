/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <gstarvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:28:52 by gstarvin          #+#    #+#             */
/*   Updated: 2020/02/19 21:57:31 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	go_next_count(t_sort **tmp, t_sort **need)
{
	(*tmp) = (*tmp)->next;
	(*need) = (*tmp);
}

void	find_while(t_sort **walk, t_sort **tmp, t_sort **need)
{
	while ((*tmp) && (*walk)->data > (*tmp)->data)
	{
		(*tmp) = (*tmp)->next;
		(*need) = (*tmp);
	}
	if ((*need) == NULL)
	{
		while ((*tmp) && (*walk)->data < (*tmp)->data)
		{
			(*tmp) = (*tmp)->next;
			(*need) = (*tmp);
		}
		while ((*tmp) && (*walk)->data > (*tmp)->data)
		{
			(*tmp) = (*tmp)->next;
			(*need) = (*tmp);
		}
	}
}

int		find_place_in_a_count(t_sort *walk, t_swap *swap)
{
	t_sort	*tmp;
	t_sort	*need;
	int		op;

	tmp = (swap->sort);
	need = NULL;
	op = 0;
	if (check_biggest(&walk, &swap->sort) && check_smallest(&walk, &swap->sort))
	{
		while (tmp && walk->data > tmp->data)
			go_next_count(&tmp, &need);
		if (need == NULL)
			find_while(&walk, &tmp, &need);
		if (need != NULL)
			op = make_up_a_count(need, swap);
	}
	else if (check_biggest(&walk, &swap->sort)
	|| check_smallest(&walk, &swap->sort))
		op = make_sorted_a_count(swap);
	else
		swap->op_a = 0;
	return (op);
}

void	insert(t_swap *swap, t_sort **tmp, t_sort **need)
{
	int op;

	op = 0;
	while (*tmp)
	{
		op = find_place_in_a_count((*tmp), swap)
		+ make_up_b_count((*tmp), swap);
		if (op < swap->min)
		{
			swap->min = op;
			(*need) = (*tmp);
		}
		(*tmp) = (*tmp)->next;
	}
}

void	insertion_push(t_swap *swap)
{
	int		op;
	t_sort	*tmp;
	t_sort	*need;

	tmp = swap->sort2;
	need = NULL;
	while (swap->sort2)
	{
		swap->min = INT32_MAX;
		insert(swap, &tmp, &need);
		swap->op_a = find_place_in_a_count(need, swap);
		swap->op_b = make_up_b_count(need, swap);
		op = swap->op_a + swap->op_b;
		if (op != 0)
			push_in_a(swap, need);
		if (op == 0)
			do_action("pa", &swap->sort, &swap->sort2);
		tmp = swap->sort2;
	}
	make_sorted_a_count(swap);
	do_a(swap);
}

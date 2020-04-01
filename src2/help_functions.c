/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <gstarvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:19:51 by gstarvin          #+#    #+#             */
/*   Updated: 2020/02/19 22:04:59 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		count_op_prev(t_sort *sort)
{
	t_sort	*tmp;
	int		op;

	op = 0;
	tmp = sort;
	while (tmp)
	{
		op++;
		tmp = tmp->prev;
	}
	op--;
	return (op);
}

int		count_op_next(t_sort *sort)
{
	t_sort	*tmp;
	int		op;

	op = 0;
	tmp = sort;
	while (tmp)
	{
		op++;
		tmp = tmp->next;
	}
	return (op);
}

int		count_operations(t_sort *sort)
{
	int op_next;
	int op_prev;

	op_next = count_op_next(sort);
	op_prev = count_op_prev(sort);
	if (op_next <= op_prev)
		return (op_next);
	else
		return (op_prev);
}

int		check_biggest(t_sort **sort, t_sort **sort2)
{
	t_sort	*tmp;

	tmp = (*sort2);
	while (tmp)
	{
		if ((*sort)->data < tmp->data)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

int		check_smallest(t_sort **sort, t_sort **sort2)
{
	t_sort	*tmp;

	tmp = (*sort2);
	while (tmp)
	{
		if ((*sort)->data > tmp->data)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

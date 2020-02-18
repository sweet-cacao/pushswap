/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_functions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <gstarvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 19:34:56 by gstarvin          #+#    #+#             */
/*   Updated: 2020/02/18 19:34:58 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_sort **sort)
{
	t_sort *tmp;

	tmp = (*sort)->next;
	push_front(tmp->data, tmp->order, sort);
	(*sort)->next->next = (*sort)->next->next->next;
	(*sort)->next->next->prev = (*sort)->next;
}

void	rotate(t_sort **sort)
{
	t_sort *tmp2;

	tmp2 = (*sort);
	delete_first(sort);
	push_end(tmp2->data, tmp2->order, sort);
}

void	rrotate(t_sort **sort)
{
	t_sort *tmp;

	tmp = (*sort);
	tmp = get_next(tmp);
	push_front(tmp->data, tmp->order, sort);
	delete_last(sort);
}

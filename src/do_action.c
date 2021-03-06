/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_action.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <gstarvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 17:41:19 by gstarvin          #+#    #+#             */
/*   Updated: 2020/02/27 15:18:24 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_action_swap(char *buff, t_sort **sort, t_sort **sort2)
{
	if (ft_strcmp(buff, "sa") == 0)
	{
		if (sort && (*sort) && (*sort)->next)
			swap(sort);
	}
	if (ft_strcmp(buff, "sb") == 0)
	{
		if (sort2 && (*sort2) && (*sort2)->next)
			swap(sort2);
	}
	if (ft_strcmp(buff, "ss") == 0)
	{
		if (sort && sort2 && (*sort2) && (*sort2)->next
		&& (*sort) && (*sort)->next)
		{
			swap(sort);
			swap(sort2);
		}
	}
}

void	do_action_push(char *buff, t_sort **sort, t_sort **sort2)
{
	t_sort *tmp;

	if (ft_strcmp(buff, "pa") == 0)
	{
		if (sort2 && (*sort2))
		{
			tmp = (*sort2);
			push_front(tmp->data, tmp->order, sort);
			delete_first(sort2);
		}
	}
	if (ft_strcmp(buff, "pb") == 0)
	{
		if (sort && (*sort))
		{
			tmp = (*sort);
			push_front(tmp->data, tmp->order, sort2);
			delete_first(sort);
		}
	}
}

void	do_action_rotate(char *buff, t_sort **sort, t_sort **sort2)
{
	if (sort && (*sort) && (*sort)->next)
	{
		if (ft_strcmp(buff, "ra") == 0)
			rotate(sort);
		if (ft_strcmp(buff, "rra") == 0)
			rrotate(sort);
	}
	if (sort2 && (*sort2) && (*sort2)->next)
	{
		if (ft_strcmp(buff, "rb") == 0)
			rotate(sort2);
		if (ft_strcmp(buff, "rrb") == 0)
			rrotate(sort2);
	}
}

void	do_action_rrotate(char *buff, t_sort **sort, t_sort **sort2)
{
	if (sort && sort2 && (*sort2) && (*sort2)->next
	&& (*sort) && (*sort)->next)
	{
		if (ft_strcmp(buff, "rr") == 0)
		{
			rotate(sort);
			rotate(sort2);
		}
		if (ft_strcmp(buff, "rrr") == 0)
		{
			rrotate(sort);
			rrotate(sort2);
		}
	}
}

void	do_action(char *buff, t_sort **sort, t_sort **sort2)
{
	do_action_swap(buff, sort, sort2);
	do_action_push(buff, sort, sort2);
	do_action_rotate(buff, sort, sort2);
	do_action_rrotate(buff, sort, sort2);
	ft_strdel(&buff);
}

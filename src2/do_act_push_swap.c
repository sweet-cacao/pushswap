/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_act_push_swap.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <gstarvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 18:54:19 by gstarvin          #+#    #+#             */
/*   Updated: 2020/02/24 19:55:05 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_act_swap(char *buff, t_sort **sort, t_sort **sort2)
{
	if (ft_strcmp(buff, "sa") == 0)
	{
		if ((*sort) && (*sort)->next)
		{
			ft_printf("sa\n");
			swap(sort);
		}
	}
	if (ft_strcmp(buff, "sb") == 0)
	{
		if ((*sort2) && (*sort2)->next)
		{
			ft_printf("sb\n");
			swap(sort2);
		}
	}
}

void	do_act_p(char *buff, t_sort **sort, t_sort **sort2)
{
	t_sort	*tmp;
	int		k;

	k = 0;
	if (ft_strcmp(buff, "pa") == 0)
	{
		if ((*sort2))
		{
			ft_printf("pa\n");
			tmp = (*sort2);
			push_front(tmp->data, 0, sort);
			delete_first(sort2);
		}
	}
	if (ft_strcmp(buff, "pb") == 0)
	{
		if (*sort)
		{
			ft_printf("pb\n");
			tmp = (*sort);
			k = tmp->data;
			push_front(k, 0, sort2);
			delete_first(sort);
		}
	}
}

void	do_act_ra(char *buff, t_sort **sort)
{
	if ((*sort) && (*sort)->next)
	{
		if (ft_strcmp(buff, "ra") == 0)
		{
			ft_printf("ra\n");
			rotate(sort);
		}
		if (ft_strcmp(buff, "rra") == 0)
		{
			ft_printf("rra\n");
			rrotate(sort);
		}
	}
}

void	do_act_rr(char *buff, t_sort **sort, t_sort **sort2)
{
	if ((*sort2) && (*sort2)->next && (*sort) && (*sort)->next)
	{
		if (ft_strcmp(buff, "rr") == 0)
		{
			ft_printf("rr\n");
			rotate(sort);
			rotate(sort2);
		}
		if (ft_strcmp(buff, "rrr") == 0)
		{
			ft_printf("rrr\n");
			rrotate(sort);
			rrotate(sort2);
		}
	}
}

void	do_act_rb(char *buff, t_sort **sort2)
{
	if ((*sort2) && (*sort2)->next)
	{
		if (ft_strcmp(buff, "rb") == 0)
		{
			ft_printf("rb\n");
			rotate(sort2);
		}
		if (ft_strcmp(buff, "rrb") == 0)
		{
			ft_printf("rrb\n");
			rrotate(sort2);
		}
	}
}

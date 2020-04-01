/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_action_push_swap.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <gstarvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 18:52:34 by gstarvin          #+#    #+#             */
/*   Updated: 2020/02/19 22:08:03 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_action(char *buff, t_sort **sort, t_sort **sort2)
{
	do_act_swap(buff, sort, sort2);
	if (ft_strcmp(buff, "ss") == 0)
	{
		if ((*sort2) && (*sort2)->next && (*sort) && (*sort)->next)
		{
			ft_printf("ss\n");
			swap(sort);
			swap(sort2);
		}
	}
	do_act_p(buff, sort, sort2);
	do_act_ra(buff, sort);
	do_act_rb(buff, sort2);
	do_act_rr(buff, sort, sort2);
}

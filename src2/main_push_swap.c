/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <gstarvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:19:03 by gstarvin          #+#    #+#             */
/*   Updated: 2020/02/27 15:14:42 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	t_swap	swap;
	int		i;

	i = 0;
	initialize_swap(&swap);
	parse_args(ac, av, &swap);
	if (check_list(&swap))
	{
		sort_del(&swap.sort);
		return (0);
	}
	if (count_len(swap.sort) == 5 || count_len(swap.sort) == 3)
		push_swap_min(&swap);
	else
		push_swap(&swap.sort, &swap);
	if (swap.sort)
		sort_del(&swap.sort);
	if (swap.sort2)
		sort_del(&swap.sort2);
	return (0);
}

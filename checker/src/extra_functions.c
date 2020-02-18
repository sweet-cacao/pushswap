/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <gstarvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 19:31:32 by gstarvin          #+#    #+#             */
/*   Updated: 2020/02/18 19:31:35 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_choose(t_swap *swap)
{
	if (check_list(swap))
		exit_error("OK", swap);
	if (check_list(swap) == 0)
		exit_error("KO", swap);
}

void	exit_error(char *str, t_swap *swap)
{
	if (ft_strcmp("Error", str) == 0)
		write(2, "Error\n", 6);
	if (ft_strcmp("OK", str) == 0)
		write(1, "OK\n", 3);
	if (ft_strcmp("KO", str) == 0)
		write(1, "KO\n", 3);
	if (swap->sort != NULL)
		sort_del(&swap->sort);
	if (swap->sort2 != NULL)
		sort_del(&swap->sort2);
	if (swap->instr != NULL)
		instr_del(&swap->instr);
	exit(0);
}

void	display_list(t_sort *sort)
{
	t_sort *tmp;

	tmp = sort;
	while (tmp)
	{
		printf("el = %d %d\n", tmp->data, tmp->order);
		tmp = tmp->next;
	}
	printf("\n");
}

float	max_f(float a, float b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

float	mod_f(float a)
{
	if (a < 0)
		return (a * -1);
	else
		return (a);
}

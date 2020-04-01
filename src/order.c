/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <gstarvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:49:34 by gstarvin          #+#    #+#             */
/*   Updated: 2020/02/20 17:44:27 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_order(t_swap *swap, int *buff, int len)
{
	t_sort	*tmp;
	int		i;

	tmp = swap->sort;
	while (tmp)
	{
		i = 0;
		while (i < len)
		{
			if (tmp->data == buff[i])
			{
				tmp->order = i;
			}
			i++;
		}
		tmp = tmp->next;
	}
}

void	swap_numbers(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	get_order(t_swap *swap, int len)
{
	t_sort	*tmp;
	int		buff[len];
	int		i;
	int		j;

	i = 0;
	tmp = swap->sort;
	while (tmp)
	{
		buff[i++] = tmp->data;
		tmp = tmp->next;
	}
	i = 0;
	while (i < (len - 1))
	{
		j = len - 1;
		while (j > i)
		{
			if (buff[j - 1] > buff[j])
				swap_numbers(&buff[j - 1], &buff[j]);
			j--;
		}
		i++;
	}
	fill_order(swap, buff, len);
}

void	fill_swap(int k, char **arv, t_swap *swap)
{
	initialize_swap(swap);
	if (k == 1)
		exit(0);
	if (ft_strcmp("-v", arv[1]) == 0)
		parse_args(k - 1, &arv[1], swap);
	else
		parse_args(k, arv, swap);
	parse_instr(swap);
}

void	check_no_visual(t_swap *swap)
{
	while (swap->instr)
	{
		do_action(swap->instr->content, &swap->sort, &(swap->sort2));
		free(swap->instr);
		swap->instr = swap->instr->next;
	}
	check_choose(swap);
}

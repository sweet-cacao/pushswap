/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <gstarvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 17:13:22 by gstarvin          #+#    #+#             */
/*   Updated: 2020/02/27 15:48:15 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_instr(t_swap *swap)
{
	t_list	*walk;
	char	*buff;

	while (get_next_line(0, &buff) > 0)
	{
		push_end_list(buff, &swap->instr);
	}
	walk = swap->instr;
	while (walk)
	{
		if (!actual_command(walk->content))
			exit_error("Error", swap);
		walk = walk->next;
	}
	walk = NULL;
}

void	get_args(int p, char **arv, t_sort **sort)
{
	int i;

	i = 0;
	while (i < p)
	{
		push_end(ft_atoi(arv[i]), 0, sort);
		i++;
	}
}

int		count_numbers(char **arv)
{
	int i;

	i = 0;
	while (arv[i])
	{
		i++;
	}
	return (i);
}

void	check_sort_args(t_swap *swap, t_sort *sort)
{
	t_sort *tmp;
	t_sort *tmp2;

	tmp = sort;
	while (tmp->next)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (tmp->data == tmp2->data)
				exit_error("Error", swap);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
}

void	parse_args(int k, char **arv, t_swap *swap)
{
	int		i;
	int		p;
	char	**arv2;

	i = 1;
	p = 0;
	if (k == 1)
		exit(0);
	while (i < k)
	{
		arv2 = ft_strsplit(arv[i], ' ');
		if (i == 1 && k == 2 && arv2[0] == NULL)
			exit(0);
		if (arv[0] != NULL)
		{
			p = count_numbers(arv2);
			check_args(p, arv2, swap);
			get_args(p, arv2, &swap->sort);
			massiv_del(arv2);
		}
		i++;
	}
	check_sort_args(swap, swap->sort);
}

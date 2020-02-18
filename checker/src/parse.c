/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <gstarvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 17:13:22 by gstarvin          #+#    #+#             */
/*   Updated: 2020/02/18 17:13:25 by gstarvin         ###   ########.fr       */
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

void	parse_args(int k, char **arv, t_sort **sort, t_swap *swap)
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
		p = count_numbers(arv2);
		check_args(p, arv2, swap);
		get_args(p, arv2, &swap->sort);
		massiv_del(arv2);
		i++;
	}
}

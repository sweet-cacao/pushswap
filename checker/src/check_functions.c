/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <gstarvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 17:16:56 by gstarvin          #+#    #+#             */
/*   Updated: 2020/02/18 19:06:05 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_number(char *str)
{
	int i;

	i = 0;
	if (str[0] == '0' && str[1] == '0')
		return (0);
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	if (i == 1 && (str[0] == '-' || str[0] == '+'))
		return (0);
	return (1);
}

int		check_max_min(char *str)
{
	int i;

	i = 0;
	if (str[0] == '-')
		i++;
	if (ft_strlen(&str[i]) > 10)
		return (-1);
	if (ft_strlen(&str[i]) == 10 && ft_atoi(&str[i]) == -1)
		return (-1);
	return (1);
}

int		check_args(int k, char **arv, t_swap *swap)
{
	int		i;
	int		j;

	i = 1;
	while (i < k)
	{
		j = 1;
		if (check_max_min(arv[i]) < 0 || !is_number(arv[i]))
		{
			massiv_del(arv);
			exit_error("Error", swap);
		}
		while (j < k)
		{
			if (j != i && ft_strcmp(arv[i], arv[j]) == 0)
			{
				massiv_del(arv);
				exit_error("Error", swap);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		one_arg(t_swap *swap)
{
	if (!swap->sort)
		return (0);
	if (!(swap->sort->next))
	{
		if (swap->sort2 == NULL)
			return (1);
		else
			return (0);
	}
	return (2);
}

int		check_list(t_swap *swap)
{
	t_sort	*tmp;
	t_sort	*tmp2;

	if (one_arg(swap) == 0 || one_arg(swap) == 1)
		return (one_arg(swap));
	tmp = swap->sort;
	tmp2 = NULL;
	while (tmp)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (tmp->data > tmp2->data)
				return (0);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
	if (swap->sort2 == NULL)
		return (1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <gstarvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 19:35:41 by gstarvin          #+#    #+#             */
/*   Updated: 2020/02/27 15:27:26 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		count_len(t_sort *sort)
{
	int len;

	len = 0;
	while (sort)
	{
		len++;
		sort = sort->next;
	}
	return (len);
}

int		actual_command(char *buff)
{
	int		i;
	char	*arr[11];

	arr[0] = "sa";
	arr[1] = "sb";
	arr[2] = "ss";
	arr[3] = "pa";
	arr[4] = "pb";
	arr[5] = "ra";
	arr[6] = "rb";
	arr[7] = "rr";
	arr[8] = "rra";
	arr[9] = "rrb";
	arr[10] = "rrr";
	i = 0;
	if (ft_strcmp(buff, "\0") == 0)
		return (1);
	while (i < 11)
	{
		if (!ft_strcmp(buff, arr[i]))
			return (1);
		i++;
	}
	return (0);
}

void	clear_matrix(t_swap *swap)
{
	int i;

	i = 0;
	if (swap->data->z_matrix)
	{
		while (i < swap->data->height)
			free(swap->data->z_matrix[i++]);
		free(swap->data->z_matrix);
	}
}

void	initialize_swap(t_swap *swap)
{
	ft_bzero(&swap->sort, sizeof(t_sort));
	ft_bzero(&swap->sort2, sizeof(t_sort));
	swap->instr = NULL;
}

void	fill_matrix_coordinates(t_swap *swap, t_sort **sort)
{
	t_sort	*tmp;
	int		i;

	i = 0;
	tmp = *sort;
	while (tmp)
	{
		if (i % 2 == 0)
		{
			swap->data->z_matrix[i][0] = 0;
			swap->data->z_matrix[i][1] = 0;
		}
		else
		{
			swap->data->z_matrix[i][0] =
			(int)(tmp->order * swap->data->score);
			swap->data->z_matrix[i][1] =
			(int)(tmp->order * swap->data->score);
			tmp = tmp->next;
		}
		i++;
	}
	swap->data->z_matrix[i][0] = 0;
	swap->data->z_matrix[i][1] = 0;
	swap->data->z_matrix[i + 1] = NULL;
}

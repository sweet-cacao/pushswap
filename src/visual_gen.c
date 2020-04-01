/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visual_gen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <gstarvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:25:12 by gstarvin          #+#    #+#             */
/*   Updated: 2020/02/19 11:34:15 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		deal_key(int key, t_swap *swap)
{
	if (key == 53)
	{
		if (swap->data)
			free(swap->data);
		check_choose(swap);
	}
	return (0);
}

void	fill_visual(t_swap *swap, t_sort **sort)
{
	t_sort	*tmp;
	int		i;

	i = 0;
	tmp = *sort;
	if (*sort)
	{
		clear_matrix(swap);
		swap->data->width = 2;
		swap->data->height = count_len(*sort) * 2 + 1;
		swap->data->z_matrix = (int **)malloc(sizeof(int *) *
		(swap->data->height + 1));
		i = 0;
		while (i < swap->data->height)
			swap->data->z_matrix[i++] = (int *)malloc(sizeof(int) *
			(swap->data->width + 1));
		fill_matrix_coordinates(swap, sort);
	}
}

int		sleep_baby(t_swap *swap)
{
	if (swap->data->score == 3)
		return (usleep(200000));
	if (swap->data->score == 2)
		return (usleep(100000));
	if (swap->data->score == 5)
		return (usleep(300000));
	if (swap->data->score == 0.5)
		return (usleep(0));
	if (swap->data->score == 0.2)
		return (usleep(0));
	return (0);
}

int		visual_gen_change(t_swap *swap)
{
	if (swap->instr)
	{
		do_action(swap->instr->content, &swap->sort, &(swap->sort2));
		free(swap->instr);
		swap->instr = swap->instr->next;
	}
	fill_visual(swap, &swap->sort);
	mlx_clear_window(swap->data->mlx_ptr, swap->data->win_ptr);
	swap->data->shift_y = 300;
	draw(swap->data);
	if (swap->sort2)
	{
		fill_visual(swap, &swap->sort2);
		swap->data->shift_y = 700;
		draw(swap->data);
	}
	mlx_string_put(swap->data->mlx_ptr, swap->data->win_ptr,
	50, 50, 0xffffff, "Stack A");
	mlx_string_put(swap->data->mlx_ptr, swap->data->win_ptr,
	50, 700, 0xffffff, "Stack B");
	return (sleep_baby(swap));
}

void	zoom_and_score(t_swap *swap)
{
	if (count_len(swap->sort) <= 10)
	{
		swap->data->zoom = 50;
		swap->data->score = 5;
	}
	else if (count_len(swap->sort) <= 40)
	{
		swap->data->zoom = 30;
		swap->data->score = 3;
	}
	else if (count_len(swap->sort) <= 100)
	{
		swap->data->zoom = 10;
		swap->data->score = 2;
	}
	else if (count_len(swap->sort) <= 500)
	{
		swap->data->zoom = 2;
		swap->data->score = 0.5;
	}
	else if (count_len(swap->sort) <= 1000)
	{
		swap->data->zoom = 1;
		swap->data->score = 0.2;
	}
}

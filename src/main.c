/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <gstarvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:48:17 by gstarvin          #+#    #+#             */
/*   Updated: 2020/02/20 17:34:08 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	t_swap	swap;
	int		len;

	fill_swap(ac, av, &swap);
	len = count_len(swap.sort);
	if (ft_strcmp("-v", av[1]) == 0 && count_len(swap.sort) <= 1000)
	{
		get_order(&swap, len);
		swap.data = (t_fdf *)malloc(sizeof(t_fdf));
		swap.data->mlx_ptr = mlx_init();
		swap.data->win_ptr = mlx_new_window(swap.data->mlx_ptr,
		2100, 1500, "FDF");
		zoom_and_score(&swap);
		swap.data->shift_x = 1900;
		mlx_key_hook(swap.data->win_ptr, deal_key, &swap);
		mlx_loop_hook(swap.data->mlx_ptr, visual_gen_change, &swap);
		mlx_loop(swap.data->mlx_ptr);
	}
	else
	{
		check_no_visual(&swap);
	}
	return (0);
}

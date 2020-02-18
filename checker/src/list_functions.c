/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <gstarvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 19:35:41 by gstarvin          #+#    #+#             */
/*   Updated: 2020/02/18 20:23:19 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		actual_command(char *buff)
{
	int		i;
	char	*arr[11] = {"sa", "sb", "ss", "pa", "pb", "ra",
	"rb", "rr", "rra", "rrb", "rrr"};

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

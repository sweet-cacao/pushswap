
#include "push_swap.h"

int is_number(char *str)
{
	int i;

	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while(str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}


void		exit_error(char *str, t_swap *swap)
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
//	if (swap->one != NULL)
	//	sort_del(&swap->one);
	//if (swap->two != NULL)
	//	sort_del(&swap->two);
	exit(0);
}

int			check_max_min(char *str)
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

int			check_args(int k, char **arv, t_swap *swap)
{
	int		i;
	int		j;

	i = 1;
	while (i < k)
	{
		j = 1;
		if (check_max_min(arv[i]) < 0)
			exit_error("Error", swap);
		while (j < k)
		{
			if (j != i && ft_strcmp(arv[i], arv[j]) == 0)
				exit_error("Error", swap);
			j++;
		}
		if (!is_number(arv[i]) || ft_atoi(arv[i]) == -1)
			exit_error("Error", swap);
		i++;
	}
	return (1);
}

/*int			check_args(int k, char **arv)
{
	int		i;

	i = 1;
	while (i < k)
	{
		if (!is_number(arv[i]))
		{
			write(1, "Error\n", 6);
			exit(0);
		}
		i++;
	}
	return (1);
}*/

int			check_list(t_sort *sort, t_sort *sort2)
{
	t_sort	*tmp;
	t_sort	*tmp2;

	tmp = sort;
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
	if (sort2 == NULL)
		return (1);
	return (0);
}

void	display_list(t_sort *sort)
{
	t_sort *tmp;
	tmp = sort;
	//  delete_last(sort);
	while (tmp)
	{
		printf("el = %d\n", tmp->data);
		tmp = tmp->next;
	}
	printf("\n");
}
/*
int	push_everything(t_sort **sort, t_sort **sort2)
{
	int p;
	t_sort *tmp;

	p = 0;
	tmp = (*sort2);
	while (*sort2)
	{
		p = do_action("pa", sort, sort2, result);
	}
	return (p);
}*/

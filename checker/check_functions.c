#include "push_swap.h"


void		check_choose(t_sort *sort, t_sort *sort2)
{
	if (check_list(sort, sort2))
	{
		write(1, "OK\n", 3);
	}
	if (check_list(sort, sort2) == 0)
	{
		write(1, "KO\n", 3);
	}
}

void		exit_error(char *str)
{
	if (ft_strcmp("Error", str) == 0)
	{
		write(2, "Error\n", 6);
		exit(0);
	}
	if (ft_strcmp("OK", str) == 0)
	{
		write(1, "OK\n", 3);
		exit(0);
	}
	if (ft_strcmp("KO", str) == 0)
	{
		write(1, "KO\n", 3);
		exit(0);
	}

}

int			is_number(char *str)
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

int			check_args(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	while (i < ac)
	{
		j = 1;
		if (check_max_min(av[i]) < 0)
			exit_error("Error");
		while (j < ac)
		{
			if (j != i && ft_strcmp(av[i], av[j]) == 0)
				exit_error("Error");
			j++;
		}
		if (!is_number(av[i]) || ft_atoi(av[i]) == -1)
			exit_error("Error");
		i++;

	}
	return (1);
}

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
			if (tmp->data < tmp2->data)
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



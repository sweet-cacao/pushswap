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

int			check_args(int ac, char **av)
{
	int		i;

	i = 1;
	while (i < ac)
	{
		if (!is_number(av[i]))
		{
			write(1, "Error\n", 6);
			exit(0);
		}
		i++;
	}
	return (1);
}

int			check_list(t_sort *sort)
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
	return (1);
}



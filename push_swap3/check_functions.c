
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

int			check_args(int k, char **arv)
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
}
/*
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
*/
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

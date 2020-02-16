#include "push_swap.h"


int			is_number(char *str)
{
	int i;

	i = 0;
	if (str[0] == '0' && str[1] == '0')
		return (0);
	if (str[0] == '-' || str[0] == '+')
		i++;
	while(str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	if (i == 1 && (str[0] == '-' || str[0] == '+'))
		return (0);
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

int			check_args(int k, char **arv, t_sort **sort)
{
	int		i;
	int		j;

	i = 1;

	while (i < k)
	{
		j = 1;
		if (check_max_min(arv[i]) < 0)
			exit_error("Error", sort, NULL);
		while (j < k)
		{
			if (j != i && ft_strcmp(arv[i], arv[j]) == 0)
				exit_error("Error", sort, NULL);
			j++;
		}
		if (!is_number(arv[i]))// || ft_atoi(arv[i]) == -1)
			exit_error("Error", sort, NULL);
		i++;
	}
	return (1);
}

int			check_list(t_sort *sort, t_sort *sort2)
{
	t_sort	*tmp;
	t_sort	*tmp2;

	tmp = sort;
	tmp2 = NULL;
	if (!(tmp->next))
		return (1);
	while (tmp)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (tmp->data > tmp2->data)
			{
		//		sort_del(&tmp);
		//		sort_del(&tmp2);
				return (0);
			}
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
//	sort_del(&tmp);
//	sort_del(&tmp2);
	if (sort2 == NULL)
		return (1);
	return (0);
}




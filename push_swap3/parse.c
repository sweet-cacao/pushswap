#include "push_swap.h"

void        get_args(int p, char **arv, t_sort **sort)
{
	int i;

	i = 0;
	while (i < p)
	{
		push_end(ft_atoi(arv[i]), sort);
		i++;
	}
}

int         count_numbers(char **arv)
{
	int i;

	i = 0;
	while(arv[i])
	{
		i++;
	}
	return (i);
}

void		parse_args(int k, char **arv, t_sort **sort)
{
	int		i;
	int p;
	char **arv2;

	i = 1;
	p = 0;
	if (k == 1)
		exit(0);
	while (i < k)
	{
		arv2 = ft_strsplit(arv[i], ' ');
		p = count_numbers(arv2);
		get_args(p, arv2, sort);
		i++;
		massiv_del(arv2);
	}
}

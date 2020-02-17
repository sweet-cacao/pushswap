#include "push_swap.h"

void        parse_instr(t_list **instr)
{
	t_list	*walk;
	char	*buff;

//	buff = ft_memalloc(sizeof(char*));
//	instr = NULL;
	while (get_next_line(0, &buff) > 0)
	{
		push_end_list(buff, instr);
	}
	walk = (*instr);
	while(walk)
	{
		if (!actual_command(walk->content))
		{
			free(buff);
			exit_error("Error", NULL);
		}

		if (!(walk->next))
		{
			ft_strcpy(walk->content, buff);
		}
		walk = walk->next;
	}
//	if (walk)
//		free(walk);
	walk = NULL;
//	ft_strdel(&buff);
//	free(walk);
}

void        get_args(int p, char **arv, t_sort **sort)
{
	int i;

	i = 0;
	while (i < p)
	{
		push_end(ft_atoi(arv[i]), 0, sort);
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

void		parse_args(int k, char **arv, t_sort **sort, t_swap *swap)
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
		check_args(k, arv2, swap);
		p = count_numbers(arv2);
		get_args(p, arv2, sort);
		massiv_del(arv2);
		i++;
	}
}

/*
t_sort		*parse_args(int ac, char **av, t_sort **sort)
{
	t_sort 	*sortik;
	int		i;

	i = 1;
	if (ac == 1)
		exit(0);
	sortik = NULL;
	check_args(ac, av, &sortik);
	while (i < ac)
	{
		push_end(ft_atoi(av[i]), 0, &sortik);
		i++;
	}
	return (sortik);
}*/

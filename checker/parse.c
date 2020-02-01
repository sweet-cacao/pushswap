#include "push_swap.h"

t_list		*parse_instr()
{
	t_list	*instr;
	t_list	*walk;
	char	*buff;

	buff = malloc(sizeof(char*));
	instr = NULL;
	while (get_next_line(0, &buff) > 0)
		ft_lstadd(&instr, ft_lstnew(buff, sizeof(buff)));
	walk = instr;
	while(walk)
	{
		if (!actual_command(walk->content))
			exit_error("Error");
		walk = walk->next;
	}
	ft_strdel(&buff);
	free(walk);
	return (instr);
}

t_sort		*parse_args(int ac, char **av)
{
	t_sort 	*sort;
	int		i;

	i = 1;
	sort = NULL;
	check_args(ac, av);
	while (i < ac)
	{
		push_front(ft_atoi(av[i]), &sort);
		i++;
	}
	return (sort);
}
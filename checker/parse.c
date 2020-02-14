#include "push_swap.h"

t_list		*parse_instr()
{
	t_list	*instr;
	t_list	*walk;
	char	*buff;

	buff = malloc(sizeof(char*));
	instr = NULL;
	while (get_next_line(0, &buff) > 0)
	{
		push_end_list(buff, &instr);
//		free(buff);
//		buff = (char *)malloc(sizeof(char*));
	}

//	free(buff);
//	push_end_list(buff, &instr);

	//	ft_lstadd(&instr, ft_lstnew(buff, sizeof(buff)));
	walk = instr;
	while(walk)
	{
//		if (!actual_command(walk->content))
//			exit_error("Error", NULL, NULL);
		walk = walk->next;
	}
	walk = NULL;
//	ft_strdel(&buff);
	free(walk);
	return (instr);
}

t_sort		*parse_args(int ac, char **av, t_sort **sort)
{
	t_sort 	*sortik;
	int		i;

	i = 1;
	sortik = NULL;
//	check_args(ac, av, &sortik);
	while (i < ac)
	{
		push_front(ft_atoi(av[i]), &sortik);
		i++;
	}
	return (sortik);
}

#include <stdio.h>
#include "push_swap.h"

//почистить ft_atoi

int main(int ac, char **av)
{
	t_list	*instr;
	t_sort 	*sort;
	t_sort 	*sort2;

	sort2 = NULL;
	sort = parse_args(ac, av, NULL);
	if (check_list(sort, sort2))
		exit_error("OK", &sort, &sort2);
	instr = parse_instr();
	while(instr)
	{
		do_action(instr->content, &sort, &sort2);
		display_list(sort);
		instr = instr->next;
	}
	check_choose(&sort, &sort2);
	display_list(sort);
	return (0);
}

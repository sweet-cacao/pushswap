#include "push_swap.h"

int main(int ac, char **av)
{
	t_swap swap;
	int arg;
	int i;

	i = 1;
	check_args(ac, av);
	swap.sort = NULL;
	swap.sort2 = NULL;
	swap.op_a = 0;
	swap.op_b = 0;
	swap.dir_a = 0;
	swap.dir_b = 0;
	while (i < ac)
	{
		push_front(atoi(av[i]), &swap.sort);
		i++;
	}
	push_swap(&swap.sort, &swap.sort2, &swap);

/*	t_sort *tmp;
	tmp = swap.sort;
	//  delete_last(sort);
	while (tmp)
	{
		printf("el = %d\n", tmp->data);
		tmp = tmp->next;
	}*/


	return (0);
}

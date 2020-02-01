#include "push_swap.h"

void		check_choose(t_sort **sort, t_sort **sort2)
{
	if (check_list(*sort, *sort2))
		exit_error("OK",  sort, sort2);
	if (check_list(*sort, *sort2) == 0)
		exit_error("KO",  sort, sort2);
}

void		exit_error(char *str, t_sort **sort, t_sort **sort2)
{
	if (ft_strcmp("Error", str) == 0)
		write(2, "Error\n", 6);
	if (ft_strcmp("OK", str) == 0)
		write(1, "OK\n", 3);
	if (ft_strcmp("KO", str) == 0)
		write(1, "KO\n", 3);
	if (sort != NULL)
		sort_del(sort);
	if (sort2 != NULL)
		sort_del(sort2);
	exit(0);
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

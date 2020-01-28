#include <stdio.h>
#include "push_swap.h"

int main(int ac, char **av)
{
    t_sort 	*sort;
	t_sort 	*sort2;
    t_sort 	*tmp;
    char	*buff;
    int		arg;
	int		i;

	i = 0;
    arg = ac - 1;
    sort = NULL;
    sort2 = NULL;
	buff = malloc(sizeof(char*));
	check_args(ac, av);
    while (arg > 0)
	{
    	push_front(atoi(av[arg]), &sort);
    	arg--;
	}
    while (actual_command(buff))
	{
		if (check_list(sort))
		{
			write(1, "OK\n", 3);
			break;
		}
		if (check_list(sort) == 2)
		{
			write(1, "KO\n", 3);
			break;
		}
		do_action(buff, sort, sort2);
		get_next_line(0, &buff);
	}
    if (!actual_command(buff))
	{
		write(1, "Error\n", 6);
    //	exit(0);
	}

   // delete_first(&sort);

    rotate(&sort);
	tmp = sort;
  //  delete_last(sort);
    while (tmp)
    {
        printf("el = %d\n", tmp->data);
        tmp = tmp->next;
    }
    return 0;
}

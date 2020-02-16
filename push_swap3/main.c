#include "push_swap.h"

void    initialize_swap(t_swap *swap)
{
	swap->sort = NULL;
	swap->sort2 = NULL;
	swap->op_a = 0;
	swap->op_b = 0;
	swap->dir_a = 0;
	swap->dir_b = 0;
}

int main(int ac, char **av)
{
	t_swap  swap;
	char    **av2;
	int     i;

	i = 0;

	av2 = ft_strsplit(av[1], ' ');
	initialize_swap(&swap);
//	check_args(ac, av, &swap);


	while (i < ac)
	{
		push_end(ft_atoi(av[i]), &swap.sort);
		i++;
	}
	if (check_list(swap.sort, swap.sort2))
		return (0);
	if (count_len(swap.sort) == 5 || count_len(swap.sort) == 3)
		push_swap_min(&swap);
	else
		push_swap(&swap.sort, &swap.sort2, &swap);

//	if (check_list(swap.sort, swap.sort2))
//		exit_error("OK", &swap);
//	exit (0);
//	display_list(swap.sort);
	return (0);
}

//./push_swap3 44 87 99 75 51 64 94 47 55 24 72 96 39 27 4 57 74 69 88 34 89 23 76 26 22 66 45 46 97 3 5 13 14 37 73 50 35 63 43 25 81 17 70 38 67 31 41 90 91 2 6 62 59 56 92 52 78 15 9 30 1 7 48 12 77 21 100 18 93 71 79 80 42 82 10 95 33 28 68 83 58 60 53 84 32 19 8 61 40 86 0 49 20 16 85 11 65 36 54 29 | ./../../../pushswap/checker/jjj 44 87 99 75 51 64 94 47 55 24 72 96 39 27 4 57 74 69 88 34 89 23 76 26 22 66 45 46 97 3 5 13 14 37 73 50 35 63 43 25 81 17 70 38 67 31 41 90 91 2 6 62 59 56 92 52 78 15 9 30 1 7 48 12 77 21 100 18 93 71 79 80 42 82 10 95 33 28 68 83 58 60 53 84 32 19 8 61 40 86 0 49 20 16 85 11 65 36 54 29
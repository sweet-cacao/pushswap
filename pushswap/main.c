#include <stdio.h>
#include <tclDecls.h>
#include "push_swap.h"

//# include "../fdf_tutorial/minilibx_macos/mlx.h"

int main (int ac, char **av)
{
	fdf *data;
	t_act a;
    t_sort 	*sort;
	t_sort 	*sort2;
    t_sort 	*tmp;
    char	*buff;
    int		arg;
	int		i;

	i = 1;
    arg = ac - 1;
    sort = NULL;
    sort2 = NULL;
	buff = malloc(sizeof(char*));
	check_args(ac, av);

	while (i < ac)
	{
		push_front(atoi(av[i]), &sort);
		i++;
	}

	data = (fdf *)malloc(sizeof(fdf));
	data->mlx_ptr = mlx_init();
	data->win_ptr = mlx_new_window(data->mlx_ptr, 1000, 1000, "FDF");
	data->zoom = 20;
	data->shift_x = 150;
	data->shift_y = 150;
//	bresenham(10, 10, 600, 300, data);
//	draw(data);
//	mlx_pixel_put(data->mlx_ptr, data->win_ptr, (int)x, (int)y, #color);




 //   if (check_list(sort, sort2))
	//{
	/*	tmp = sort;
		while (tmp)
		{
			printf("el = %d\n", tmp->data);
			tmp = tmp->next;
		}
		printf("%d", i);*/
    //	return (0);
	//}
    if (count_len(sort) == 3)
	{
		i  = push_swap_min(&sort, &sort2, data);
	}
    if (count_len(sort) == 5)
	{
		push_swap_five(&sort, &sort2, data);
	}
    /*
    else if (count_len(sort) <=100)
	{

	}*/
    else
		i = push_swap2(&sort, &sort2, data);

/* 	 i = push_swap2(&sort, &sort2);*/
//	i = push_swap(&sort, &sort2);

/*	if (check_list(sort, sort2))
	{
		write(1, "OK\n", 3);
		exit(0);
	}

    while (get_next_line(0, &buff) > 0)
	{
			if (!actual_command(buff)) {
				write(1, "Error\n", 6);
				break;
				//	exit(0);
			}
			do_action(buff, &sort, &sort2);
			display_list(sort);

	}
	if (check_list(sort, sort2))
	{
		write(1, "OK\n", 3);

	}
	if (check_list(sort, sort2) == 0)
	{
		write(1, "KO\n", 3);

	}*/
	// delete_first(&sort);
 //   rotate(&sort);

//	mlx_key_hook(data->win_ptr, deal_key, data);
	mlx_loop(data->mlx_ptr);
/*	tmp = sort;
  //  delete_last(sort);
    while (tmp)
    {
        printf("el = %d\n", tmp->data);
        tmp = tmp->next;
    }
    printf("%d", i);*/
    return (0);
}

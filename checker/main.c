#include <stdio.h>
#include "push_swap.h"

//почистить ft_atoi
int 		count_len(t_sort *sort)
{
	int len;

	len = 0;
	while(sort)
	{
		len++;
		sort = sort->next;
	}
	return (len);
}

int visual_gen(t_fdf *data, t_sort *sort, t_sort *sort2)
{
	int i;
	int j;

	i = 0;
	j = 0;

	data->width = 2;
	data->height = count_len(sort) * 2;
	data->z_matrix = (int **)malloc(sizeof(int*) * (data->height + 1));
	while (i < data->height)
		data->z_matrix[i++] = (int*)malloc(sizeof(int) * (data->width + 1));
	i = 0;
	while(sort)
	{
		if (i % 2 == 0) {
			data->z_matrix[i][0] = 0;
			data->z_matrix[i][1] = 0;
		} else{
			data->z_matrix[i][0] = sort->data;
			data->z_matrix[i][1] = sort->data;
			sort = sort->next;
		}
		i++;
	}
	data->z_matrix[i] = NULL;
//	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	draw(data);
	return (0);
}

int visual_gen_change(t_swap *swap)
{
	t_sort *tmp;



	/*if(swap->instr)
	{

	}*/
	if (swap->instr->next)
		do_action(swap->instr->content, &swap->sort, &swap->sort2);
/*	while(tmp)
	{
		tmp->data++;
		tmp = tmp->next;
	}*/
	tmp = swap->sort;
	int i = 0;
	while (i < swap->data->height)
		free(swap->data->z_matrix[i++]);// (int*)malloc(sizeof(int) * (swap->data->width + 1));
	free(swap->data->z_matrix);
	swap->data->width = 2;
	swap->data->height = count_len(swap->sort) * 2;
	swap->data->z_matrix = (int **)malloc(sizeof(int*) * (swap->data->height + 1));
	i = 0;
	while (i < swap->data->height)
		swap->data->z_matrix[i++] = (int*)malloc(sizeof(int) * (swap->data->width + 1));
	i = 0;
	while(tmp)
	{
		if (i % 2 == 0) {
			swap->data->z_matrix[i][0] = 0;
			swap->data->z_matrix[i][1] = 0;
		} else{
			swap->data->z_matrix[i][0] = tmp->data;
			swap->data->z_matrix[i][1] = tmp->data;
			tmp = tmp->next;
		}
		i++;
	}
	swap->data->z_matrix[i] = NULL;
	mlx_clear_window(swap->data->mlx_ptr, swap->data->win_ptr);

	draw(swap->data);
//	if (!(swap->instr->next))
//		exit(0);
	if ((swap->instr->next))
		swap->instr = swap->instr->next;
	return (usleep(100000));
}

int main(int ac, char **av)
{
	t_swap swap;
	t_list	*instr;
	t_sort 	*sort;
	t_sort 	*sort2;

	sort2 = NULL;
	sort = parse_args(ac, av, NULL);
	if (check_list(sort, sort2))
		exit_error("OK", &sort, &sort2);
	instr = parse_instr();
	swap.sort = sort;
//	swap.sort2 = swap.sort;
	swap.data = (t_fdf *)malloc(sizeof(t_fdf));
	swap.data->mlx_ptr = mlx_init();
	swap.data->win_ptr = mlx_new_window(swap.data->mlx_ptr, 1000, 1000, "FDF");
	swap.data->zoom = 20;
	swap.data->shift_x = 200;
	swap.data->shift_y = 200;
	swap.instr = instr;
	visual_gen(swap.data, swap.sort, swap.sort2);
/*	while(instr)
	{
		do_action(instr->content, &sort, &sort2);
		display_list(sort);
		instr = instr->next;
	}*/
//	if (swap.instr->next)
//		swap.instr = swap.instr->next;
//	if (swap.instr->next)
//	do_action(swap.instr->content, &swap.sort, &swap.sort2);;
//	if (swap.instr)
	mlx_loop_hook(swap.data->mlx_ptr, visual_gen_change, &swap);
//	display_list(sort);
//	check_choose(&sort, &sort2);
	mlx_loop(swap.data->mlx_ptr);
	return (0);
}

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

void    get_order(t_swap *swap)
{
	t_sort *tmp;
	t_sort *tmp2;
	int len = count_len(swap->sort);
	int buff[len];
	int i;
	int j;
	int c;

	i = 0;
	tmp = swap->sort;
	while(tmp)
	{
		buff[i] = tmp->data;
		tmp = tmp->next;
		i++;
	}
	j = 0;
	i = 0;
	while (i < (len - 1))
	{
		j = len - 1;
		while (j > i)
		{
			if (buff[j - 1] > buff[j])
			{
				c = buff[j - 1];
				buff[j - 1] = buff[j];
				buff[j] = c;
			}
			j--;
		}
		i++;
	}
	tmp = swap->sort;
	i = 0;
	while(tmp)
	{
		i = 0;
		while(i < len)
		{
			if (tmp->data == buff[i])
			{
				tmp->order = i;
			}
			i++;
		}
		tmp = tmp->next;
	}
	/*
	tmp = swap->sort;
	tmp2 = swap->sort;
	while(tmp->next)
	{
		while(tmp2->next->next)
		{
			if (tmp > tmp2->next)
			{
				c = tmp->data;
				tmp->data = tmp2->next->data;
				tmp2->next->data = c;
			}
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
		tmp2 = swap->sort;
	}*/
//	swap->sort = tmp;
}

int     deal_key(int key, t_swap *swap, t_list *instr, t_sort *sort)
{
	printf("%d", key);
	if (key == 124)
	{
		swap->sort = NULL;
		swap->sort = swap->sort_init;
		swap->sort_init->prev = NULL;
		swap->sort2 = NULL;
		swap->instr = swap->instr_init;
	}
	return (0);
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
			data->z_matrix[i][0] = sort->order;
			data->z_matrix[i][1] = sort->order;
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
	if (swap->instr)
	{
		do_action(swap->instr->content, &swap->sort, &(swap->sort2));
		printf("%s\n", swap->instr->content);
		swap->instr = swap->instr->next;

	}

//	if (swap->instr)

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
			swap->data->z_matrix[i][0] = tmp->order ;
			swap->data->z_matrix[i][1] = tmp->order ;
			tmp = tmp->next;
		}
		i++;
	}
	swap->data->z_matrix[i] = NULL;
	mlx_clear_window(swap->data->mlx_ptr, swap->data->win_ptr);
	swap->data->shift_y = 300;
	draw(swap->data);

//отрисовка второго
	if (swap->sort2) {
		tmp = swap->sort2;
		i = 0;
		while (i < swap->data->height)
			free(swap->data->z_matrix[i++]);// (int*)malloc(sizeof(int) * (swap->data->width + 1));
		free(swap->data->z_matrix);
		swap->data->width = 2;
		swap->data->height = count_len(swap->sort2) * 2;
		swap->data->z_matrix = (int **) malloc(sizeof(int *) * (swap->data->height + 1));
		i = 0;
		while (i < swap->data->height)
			swap->data->z_matrix[i++] = (int *) malloc(sizeof(int) * (swap->data->width + 1));
		i = 0;
		while (tmp) {
			if (i % 2 == 0) {
				swap->data->z_matrix[i][0] = 0;
				swap->data->z_matrix[i][1] = 0;
			} else {
				swap->data->z_matrix[i][0] = tmp->order ;
				swap->data->z_matrix[i][1] = tmp->order ;
				tmp = tmp->next;
			}
			i++;
		}
		swap->data->z_matrix[i] = NULL;
		swap->data->shift_y = 700;
		draw(swap->data);
	}
//	if (!(swap->instr->next))
//		exit(0);
/*	t_sort *tmp2;
	tmp2 = swap->sort;
	//  delete_last(sort);
	printf("a\n");
	while (tmp2)
	{
		printf("el = %d\n", tmp2->data);
		tmp2 = tmp2->next;
	}
	tmp2 = swap->sort2;
	//  delete_last(sort);
	printf("b\n");
	while (tmp2)
	{
		printf("el = %d\n", tmp2->data);
		tmp2 = tmp2->next;
	}*/

	return (usleep(105000));
}

int main(int ac, char **av)
{
	t_swap swap;
	t_list	*instr;
	t_sort 	*sort;
	t_sort 	*sort2;

	swap.sort2 = NULL;
	sort = parse_args(ac, av, NULL);
//	if (check_list(sort, sort2))
//		exit_error("OK", &sort, &sort2);
	instr = parse_instr();
	swap.sort_init = sort;
	swap.instr_init = instr;
	swap.sort = sort;
	get_order(&swap);
//	swap.sort2 = swap.sort;
	swap.data = (t_fdf *)malloc(sizeof(t_fdf));
	swap.data->mlx_ptr = mlx_init();
	swap.data->win_ptr = mlx_new_window(swap.data->mlx_ptr, 2100, 1500, "FDF");
	swap.data->zoom = 10;
	swap.data->shift_x = 1900;
	//swap.data->shift_y = 500;
	swap.instr = instr;
//	visual_gen(swap.data, swap.sort, swap.sort2);
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

	mlx_key_hook(swap.data->win_ptr, deal_key, &swap);
	mlx_loop_hook(swap.data->mlx_ptr, visual_gen_change, &swap);



//	display_list(sort);
//	check_choose(&sort, &sort2);

	mlx_loop(swap.data->mlx_ptr);

	return (0);
}


// gcc *.c ../../gnl/get_next_line.c ../fdf_tutorial/libft.a ../fdf_tutorial/minilibx_macos/libmlx.a -framework OpenGL -framework AppKit
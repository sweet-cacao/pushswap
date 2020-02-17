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
}

int     deal_key(int key, t_swap *swap)
{
//	if (key == 124)
//	{
//		sort_del(&swap->sort);
//		sort_del(&swap->sort2);
//		swap->sort = NULL;
//		swap->sort = swap->sort_init;
//		swap->sort_init->prev = NULL;
//		swap->sort2 = NULL;
//		swap->instr = swap->instr_init;
//	}
	if (key == 53)
	{
		if (swap->data)
			free(swap->data);
		check_choose(swap);
	}
	return (0);
}

void    clear_matrix(t_swap *swap)
{
	int i;

	i = 0;
	if (swap->data->z_matrix)
	{
		while (i < swap->data->height)
			free(swap->data->z_matrix[i++]);// (int*)malloc(sizeof(int) * (swap->data->width + 1));
		free(swap->data->z_matrix);
	}
}

void    fill_visual(t_swap *swap, t_sort **sort)
{
	t_sort *tmp;
	int i;

	i = 0;
	tmp = *sort;
	if (*sort)
	{
		clear_matrix(swap);
		swap->data->width = 2;
		swap->data->height = count_len(*sort) * 2 + 1;

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
				swap->data->z_matrix[i][0] = (int) (tmp->order * swap->data->score);
				swap->data->z_matrix[i][1] = (int) (tmp->order * swap->data->score);
				tmp = tmp->next;
			}
			i++;
		}
		swap->data->z_matrix[i][0] = 0;
		swap->data->z_matrix[i][1] = 0;
		swap->data->z_matrix[i + 1] = NULL;
	}
}

int     sleep_baby(t_swap *swap)
{
	if (swap->data->score == 3)
		return (usleep(200000));
	if (swap->data->score == 2)
		return (usleep(100000));
	if (swap->data->score == 5)
		return (usleep(300000));
	if (swap->data->score == 0.5)
		return (usleep(0));
	if (swap->data->score == 0.2)
		return (usleep(0));
	return (0);
}

int     visual_gen_change(t_swap *swap)
{
	if (swap->instr)
	{
		do_action(swap->instr->content, &swap->sort, &(swap->sort2));
//		ft_strdel(swap->instr->content);
		free(swap->instr);
		swap->instr = swap->instr->next;
	}
	fill_visual(swap, &swap->sort);
	mlx_clear_window(swap->data->mlx_ptr, swap->data->win_ptr);
	swap->data->shift_y = 300;
	draw(swap->data);

	if (swap->sort2) {
		fill_visual(swap, &swap->sort2);
		swap->data->shift_y = 700;
		draw(swap->data);
	}

	mlx_string_put(swap->data->mlx_ptr, swap->data->win_ptr, 50, 50, 0xffffff,"Stack A");
	mlx_string_put(swap->data->mlx_ptr, swap->data->win_ptr, 50, 700, 0xffffff,"Stack B");

	return(sleep_baby(swap));
}

void    zoom_and_score(t_swap *swap)
{
	if (count_len(swap->sort) <= 10)
	{
		swap->data->zoom = 50;
		swap->data->score = 5;
	}
	else if (count_len(swap->sort) <= 40)
	{
		swap->data->zoom = 30;
		swap->data->score = 3;
	}
	else if (count_len(swap->sort) <= 100)
	{
		swap->data->zoom = 10;
		swap->data->score = 2;
	}
	else if (count_len(swap->sort) <= 500)
	{
		swap->data->zoom = 2;
		swap->data->score = 0.5;
	}
	else if (count_len(swap->sort) <= 1000)
	{
		swap->data->zoom = 1;
		swap->data->score = 0.2;
	}
}

void    initialize_swap(t_swap *swap)
{
	swap->sort = NULL;
	swap->sort2 = NULL;
	swap->instr = NULL;
}

int main(int ac, char **av)
{

	t_swap swap;

	initialize_swap(&swap);
	if (ft_strcmp("-v" , av[1]) == 0)
	{
		parse_args(ac - 1, &av[1], &swap.sort, &swap);
//		parse_args(ac - 1, &av[1], &swap.sort_init, &swap);
	}
	else
	{
		parse_args(ac, av, &swap.sort, &swap);
//		parse_args(ac, av, &swap.sort_init, &swap);
	}
//	swap.sort_init = swap.sort;
	parse_instr(&swap.instr);
	//swap.instr_init = swap.instr;
	if (ft_strcmp("-v" , av[1]) == 0 && count_len(swap.sort) <= 1000)
	{
//		if (check_list(swap.sort, swap.sort2))
//			exit_error("OK", &swap.sort, &swap.sort2);
		get_order(&swap);
		swap.data = (t_fdf *) malloc(sizeof(t_fdf));
		swap.data->mlx_ptr = mlx_init();
		swap.data->win_ptr = mlx_new_window(swap.data->mlx_ptr, 2100, 1500, "FDF");
		zoom_and_score(&swap);

		swap.data->shift_x = 1900;
		mlx_key_hook(swap.data->win_ptr, deal_key, &swap);
		mlx_loop_hook(swap.data->mlx_ptr, visual_gen_change, &swap);
		mlx_loop(swap.data->mlx_ptr);
	}
	else
	{
		while (swap.instr)
		{
			do_action(swap.instr->content, &swap.sort, &(swap.sort2));
	//		ft_strdel(swap.instr->content);
			free(swap.instr);
			swap.instr = swap.instr->next;
		}
		if (check_list(&swap))
			exit_error("OK", &swap);
		else
			exit_error("KO", &swap);
	}
//	display_list(swap.sort);
//	check_choose(&swap);

	return (0);
}


// gcc *.c ../../gnl/get_next_line.c ../fdf_tutorial/libft.a ../fdf_tutorial/minilibx_macos/libmlx.a -framework OpenGL -framework AppKit
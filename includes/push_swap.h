/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstarvin <gstarvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 21:52:08 by gstarvin          #+#    #+#             */
/*   Updated: 2020/02/24 12:25:24 by gstarvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_PUSH_SWAP_H
# define PUSHSWAP_PUSH_SWAP_H

# include "../minilibx_macos/mlx.h"
# include "../libft/includes/ft_printf.h"
# include <stdio.h>
# include <math.h>

typedef struct		s_coord
{
	float			x;
	float			y;
	float			x1;
	float			y1;
	float			x_step;
	float			y_step;

}					t_coord;

typedef struct		s_fdf
{
	int				width;
	int				height;
	int				**z_matrix;
	int				zoom;
	int				color;
	int				shift_x;
	int				shift_y;
	double			score;

	void			*mlx_ptr;
	void			*win_ptr;
}					t_fdf;

typedef struct		s_swap
{
	t_sort			*sort;
	t_sort			*sort2;
	t_fdf			*data;
	t_list			*instr;
	t_sort			*one;
	t_sort			*two;
	int				min;
	int				max;
	int				len;
	int				stack[3];
	int				count_one;
	int				count_two;
	int				op_a;
	int				op_b;
	int				dir_a;
	int				dir_b;
}					t_swap;

int					count_len(t_sort *sort);
float				max_f(float a, float b);
float				mod_f(float a);
void				push_front(int data, int order, t_sort **sort);
void				push_end(int data, int order, t_sort **sort);
t_sort				*add_block(int data, int order);
int					actual_command(char *buff);
int					check_args(int ac, char **av, t_swap *swap);

int					check_list(t_swap *swap);

void				delete_last(t_sort **sort);
void				delete_first(t_sort **sort);
void				swap(t_sort **sort);
t_sort				*get_next(t_sort *map);
void				rotate(t_sort **sort);
void				rrotate(t_sort **sort);
void				do_action(char *buff, t_sort **sort, t_sort **sort2);
void				display_list(t_sort *sort);
void				push_swap(t_sort **sort, t_swap *swap);
void				exit_error(char *str, t_swap *swap2);
void				check_choose(t_swap *swap);
void				parse_instr(t_swap *swap);
void				parse_args(int k, char **arv, t_swap *swap);
void				sort_del(t_sort **sort);
void				draw(t_fdf *data);
void				instr_del(t_list **sort);
void				clear_matrix(t_swap *swap);
void				push_end_list(char *data, t_list **instr);
void				massiv_del(char **arv);
void				clear_matrix(t_swap *swap);
void				initialize_swap(t_swap *swap);
void				fill_matrix_coordinates(t_swap *swap, t_sort **sort);
void				zoom_and_score(t_swap *swap);
int					visual_gen_change(t_swap *swap);
int					deal_key(int key, t_swap *swap);
void				check_no_visual(t_swap *swap);
void				fill_swap(int k, char **arv, t_swap *swap);
void				get_order(t_swap *swap, int len);
void				swap_numbers(int *a, int *b);
void				fill_order(t_swap *swap, int *buff, int len);

int					find_min(t_sort **sort);
int					find_max(t_sort **sort);
int					count_operations(t_sort *sort);
int					count_op_prev(t_sort *sort);
int					count_op_next(t_sort *sort);
int					check_biggest(t_sort **sort, t_sort **sort2);
int					check_smallest(t_sort **sort, t_sort **sort2);
void				insertion_push(t_swap *swap);
void				push_in_a(t_swap *swap, t_sort *need);
void				do_a(t_swap *swap);
void				push_swap_min(t_swap *swap);

void				do_act_swap(char *buff, t_sort **sort, t_sort **sort2);
void				do_act_p(char *buff, t_sort **sort, t_sort **sort2);
void				do_act_ra(char *buff, t_sort **sort);
void				do_act_rr(char *buff, t_sort **sort, t_sort **sort2);
void				do_act_rb(char *buff, t_sort **sort2);
void				while_act(char *buff, t_swap *swap, int op);
void				get_max_min_len(t_swap *swap);

int					make_up_a_count(t_sort *need, t_swap *swap);
int					make_up_b_count(t_sort *need, t_swap *swap);
int					make_sorted_a_count(t_swap *swap);

#endif

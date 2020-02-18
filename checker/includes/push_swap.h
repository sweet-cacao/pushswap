#ifndef PUSHSWAP_PUSH_SWAP_H
#define PUSHSWAP_PUSH_SWAP_H

# include "../minilibx_macos/mlx.h"
# include "../libft/ft_str/libft.h"
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

typedef struct      s_fdf
{
	int width;
	int height;
	int **z_matrix;
	int zoom;
	int color;
	int shift_x;
	int shift_y;
	double score;

	void *mlx_ptr;
	void *win_ptr;
}                   t_fdf;

typedef struct      s_swap
{
	t_sort          *sort;
	t_sort          *sort2;
	t_fdf           *data;
	t_list          *instr;
}                   t_swap;

float				max_f(float a, float b);
float				mod_f(float a);
void        		push_front(int data, int order, t_sort **sort);
void        		push_end(int data, int order, t_sort **sort);
t_sort      		*add_block(int data, int order);
int 				actual_command(char *buff);
int					check_args(int ac, char **av, t_swap *swap);
int			        check_list(t_swap *swap);
void 				delete_last(t_sort **sort);
void				delete_first(t_sort **sort);
void				swap(t_sort **sort);
t_sort 				*get_next(t_sort *map);
void				rotate(t_sort **sort);
void				rrotate(t_sort **sort);
void				do_action(char *buff, t_sort **sort, t_sort **sort2);
void				display_list(t_sort *sort);
void				push_swap(t_sort **sort, t_sort **sort2);
void				exit_error(char *str, t_swap *swap2);
void				check_choose(t_swap *swap);
void                parse_instr(t_swap *swap);
void		        parse_args(int k, char **arv, t_sort **sort, t_swap *swap);
void				sort_del(t_sort **sort);
void                draw(t_fdf *data);
void	            instr_del(t_list **sort);
void                clear_matrix(t_swap *swap);
void                push_end_list(char *data, t_list **instr);
void                massiv_del(char **arv);

#endif

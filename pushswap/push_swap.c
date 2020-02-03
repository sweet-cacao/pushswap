#include "push_swap.h"

int		count_op_prev(t_sort *sort)
{
	t_sort *tmp;
	int op;

	op = 0;
	tmp = sort;
	while(tmp)
	{
		op++;
		tmp = tmp->prev;
	}
	op--;
	return (op);
}

int		count_op_next(t_sort *sort)
{
	t_sort *tmp;
	int op;

	op = 0;
	tmp = sort;
	while(tmp)
	{
		op++;
		tmp = tmp->next;
	}
	return (op);
}

int	push_swap(t_sort **sort, t_sort **sort2) {
	t_sort *tmp;
	int min;
	int op_prev;
	int op_next;
	int i;
	char *str = malloc(sizeof(char) * 5);
	char *instr[1000];
	int j;
	t_sort *need;


	op_next = 0;
	op_prev = 0;
	j = 0;
	i = 0;
	tmp = (*sort);
	while ((*sort)->next)
	{
		i = 0;
		min = INT32_MAX;
		while (tmp)
		{
			if (tmp->data < min)
			{
				need = tmp;
				min = tmp->data;
			}
			tmp = tmp->next;
		}
		op_next = count_op_next(need);
		op_prev = count_op_prev(need);
		str = op_next <= op_prev ? "next" : "prev";
		if (ft_strcmp("next", str) == 0)
		{
			while (i < op_next)
			{
				do_action("rra", sort, sort2);
				display_list(*sort);
				instr[j] = "rra";// сомнительный код без маллока
				j++;
				i++;
			}
		}
		if (ft_strcmp("prev", str) == 0)
		{
			while (i < op_prev)
			{
				do_action("ra", sort, sort2);
				display_list(*sort);
				instr[j] = "ra";// сомнительный код без маллока
				j++;
				i++;
			}
		}
		do_action("pb", sort, sort2);
		display_list(*sort);
		instr[j] = "pb";
		j++;
		tmp = (*sort);
	}
	int p = 0;
	while (*sort2)
	{
		p = do_action("pa", sort, sort2);
		display_list(*sort);
		instr[j] = "pa";
		j++;
	}
	instr[j] = "\0";
	i = 0;
	printf("RESULT\n");
	while (instr[i] != "\0")
	{
		printf("%s\n", instr[i]);
		i++;
	}
	return (p);
}

int 	count_operations(t_sort *sort)
{
	int op_next;
	int op_prev;

	op_next = count_op_next(sort);
	op_prev = count_op_prev(sort);
	if (op_next <= op_prev)
		return op_next;
	else
		return op_prev;
}

void	make_up(t_sort **sort, t_sort *tmp) {
	int op_next;
	int op_prev;
	t_sort *sort2;
	char *str = malloc(sizeof(char) * 5);
	int i;
	char *instr[1000];
	int j;


	if (tmp == NULL || sort == NULL)
		return;
	i = 0;
	j = 0;
	op_next = count_op_next(tmp);
	op_prev = count_op_prev(tmp);
	str = op_next <= op_prev ? "next" : "prev";
	if (ft_strcmp("next", str) == 0) {
		while (i < op_next) {
			do_action("rrb", &sort2, sort);
			printf("rrb");
			display_list(*sort);
			instr[j] = "rra";// сомнительный код без маллока
			j++;
			i++;
		}
	}
	if (ft_strcmp("prev", str) == 0) {
		while (i < op_prev) {
			do_action("rb",  &sort2, sort);
			printf("rb");
			display_list(*sort);
			instr[j] = "ra";// сомнительный код без маллока
			j++;
			i++;
		}
	}
}

void	check_stack_b(t_sort **sort2, t_sort *tmp)
{
	t_sort *walk;
	t_sort *need;
	int diff;
	int go;

	need = NULL;
	walk = (*sort2);
	diff = 101;
	while (walk)
	{
		go = tmp->data - walk->data;
		if (go < diff && go > 0)
		{
			diff = go;
			need = walk;
		}
		walk = walk->next;
	}
	make_up(sort2, need);
}

void 	choose_number(t_sort **sort, t_sort **sort2, int count_one, int count_two, t_sort *one, t_sort *two)
{
	int op_next;
	int op_prev;
	char *str = malloc(sizeof(char) * 5);
	int i;
	char *instr[1000];
	int j;

	i = 0;
	j = 0;
	if (count_one < count_two)
	{
		op_next = count_op_next(one);
		op_prev = count_op_prev(one);
		str = op_next <= op_prev ? "next" : "prev";
		if (ft_strcmp("next", str) == 0)
		{
			while (i < op_next)
			{
				do_action("rra", sort, sort2);
	//			display_list(*sort);
				instr[j] = "rra";// сомнительный код без маллока
				j++;
				i++;
			}
		}
		if (ft_strcmp("prev", str) == 0)
		{
			while (i < op_prev)
			{
				do_action("ra", sort, sort2);
		//		display_list(*sort);
				instr[j] = "ra";// сомнительный код без маллока
				j++;
				i++;
			}
		}
		check_stack_b(sort2, one);
		do_action("pb", sort, sort2);
	}
	else
	{
		op_next = count_op_next(two);
		op_prev = count_op_prev(two);
		str = op_next <= op_prev ? "next" : "prev";
		if (ft_strcmp("next", str) == 0)
		{
			while (i < op_next)
			{
				do_action("rra", sort, sort2);
		//		display_list(*sort);
				instr[j] = "rra";// сомнительный код без маллока
				j++;
				i++;
			}
		}
		if (ft_strcmp("prev", str) == 0)
		{
			while (i < op_prev)
			{
				do_action("ra", sort, sort2);
		//		display_list(*sort);
				instr[j] = "ra";// сомнительный код без маллока
				j++;
				i++;
			}
		}
		check_stack_b(sort2, two);
		do_action("pb", sort, sort2);
	}
}


void	make_up_and_push_b(t_sort **sort, t_sort **sort2, t_sort *tmp)
{
	int op_next;
	int op_prev;
	char *str = malloc(sizeof(char) * 5);
	int i;
	char *instr[1000];
	int j;

	i = 0;
	j = 0;
	op_next = count_op_next(tmp);
	op_prev = count_op_prev(tmp);
	str = op_next <= op_prev ? "next" : "prev";
	if (ft_strcmp("next", str) == 0)
	{
		while (i < op_next)
		{
			do_action("rra", sort, sort2);
	//		display_list(*sort);
			instr[j] = "rra";// сомнительный код без маллока
			j++;
			i++;
		}
	}
	if (ft_strcmp("prev", str) == 0)
	{
		while (i < op_prev)
		{
			do_action("ra", sort, sort2);
	//		display_list(*sort);
			instr[j] = "ra";// сомнительный код без маллока
			j++;
			i++;
		}
	}
	do_action("pb", sort, sort2);
}
t_sort 	*find_last(int stack_last, t_sort *sort)
{
	t_sort *tmp;
	t_sort *tmp2;

	tmp2 = NULL;
	tmp = get_next(sort);
	while(tmp)
	{
		if (tmp->data < stack_last)
			tmp2 = tmp;
		tmp = tmp->prev;
	}
	return (tmp2);
}

t_sort 	*find_first(int stack_last, t_sort *sort)
{
	t_sort *tmp;

	tmp = sort;
	while(tmp)
	{
		if (tmp->data < stack_last)
			return (tmp);
		tmp = tmp->next;
	}
	return (tmp);
}

int	push_everything(t_sort **sort, t_sort **sort2)
{
	int p;
	t_sort *tmp;

	tmp = (*sort2);
	while (*sort2)
	{
		p = do_action("pa", sort, sort2);
	}
	return (p);
}
/*
void	fill_instr(int *j, char **instr[1000], char *str)
{
	*instr[*j] = str;
	j++;
}*/

int	push_swap2(t_sort **sort, t_sort **sort2)
{
	t_sort *tmp;
	t_sort *one;
	t_sort *two;
	int max = INT32_MIN;
	int count_one;
	int count_two;
	int stack[5] = {20, 40, 60, 80, 100};
	char *instr[1000];
	int i;
	int j;

	i = 0;
	j = 0;

	while (i < 5) //для каждой группы выполняем необходимый код
	{
		one = find_first(stack[i], *sort);
		while (one != NULL)
		{
			one = find_first(stack[i], *sort);
			if (one == NULL)
				break;
			two = find_last(stack[i], *sort);
			count_one = count_operations(one);
			if (two == NULL)
			{
				choose_number(sort, sort2, count_one, INT32_MAX, one, two);
				break;
			}
			count_two = count_operations(two);
			choose_number(sort, sort2, count_one, count_two, one, two);
		}
		i++;
	}
	tmp = (*sort2);
	while (tmp)
	{
		if (tmp->data > max)
		{
			max = tmp->data;
			one = tmp;
		}
		tmp = tmp->next;
	}
	make_up(sort2, one);
	int p = push_everything(sort, sort2);
/*	one = find_first()
	tmp = (*sort);
	while (two == NULL)
	{
		if (tmp->data < 20)
		{
			if (one == NULL)
				one = tmp;
			two = tmp;
		}
		tmp = tmp->next;
	}
	count_one = count_operations(one);
	count_two = count_operations(two);
	choose_number(sort, sort2, count_one, count_two, one, two);//перегоняет число с меньшим количеством операций в другой стек*/
	return (p);

}
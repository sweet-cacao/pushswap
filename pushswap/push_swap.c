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
	char *instr[3000];
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

int		last_make_up(t_sort **sort, t_sort **sort2)
{
	t_sort *tmp;
	t_sort *tmp3;
	int min;
	int op_prev;
	int op_next;
	int i;
	char *str = malloc(sizeof(char) * 5);
//	char *instr[3000];
//	int j;
	t_sort *need;
	int p;


	op_next = 0;
	op_prev = 0;
	p = 0;
//	j = 0;
	i = 0;
	tmp = (*sort2);
	need = NULL;
	while ((*sort2))
	{
		i = 0;
		min = INT32_MIN;
		while (tmp)
		{
			if (tmp->data >= min)
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
				do_action("rrb", sort, sort2);
//				display_list(*sort);
//				instr[j] = "rrb";// сомнительный код без маллока
//				j++;
				i++;
			}
		}
		if (ft_strcmp("prev", str) == 0)
		{
			while (i < op_prev)
			{
				do_action("rb", sort, sort2);
//				display_list(*sort);
//				instr[j] = "rb";// сомнительный код без маллока
//				j++;
				i++;
			}
		}
		do_action("pa", sort, sort2);
//		display_list(*sort);
//		instr[j] = "pa";
//		j++;
		if (!(*sort2))
			break;
		if (*sort2)
			tmp = (*sort2);
//		tmp3 = (*sort2);
	}
//	p = do_action("last", sort, sort2);
	p = do_action("pa", sort, sort2);
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

int	make_up(t_sort **sort, t_sort *tmp, int go)
{
	int op_next;
	int op_prev;
	t_sort *sort2;
	char *str = malloc(sizeof(char) * 5);
	int i;
//	char *instr[1000];
	int j;

	if (tmp == NULL || sort == NULL)
		return (0);
	i = 0;
	j = 0;
	op_next = count_op_next(tmp);
	op_prev = count_op_prev(tmp);
	str = op_next <= op_prev ? "next" : "prev";
	if (ft_strcmp("next", str) == 0)
	{
		while (i < op_next)
		{
			j = do_action("rrb", &sort2, sort);
//			printf("rrb");
//			display_list(*sort);
//			instr[j] = "rra";// сомнительный код без маллока
			j++;
			i++;
		}
//		if (go < 0 && op_next > 0)
//			do_action("rb", &sort2, sort);
	}
	if (ft_strcmp("prev", str) == 0)
	{
		while (i < op_prev)
		{
			j = do_action("rb",  &sort2, sort);
//			printf("rb");
//			display_list(*sort);
//			instr[j] = "ra";// сомнительный код без маллока
//			j++;
			i++;

		}
//		if (go < 0 && op_prev > 0)
//			do_action("rb", &sort2, sort);
	}
	//if (go < 0)
	//	do_action("rrb", &sort2, sort);
//	if ((*sort)->data > (*sort)->next->data)
//		do_action("rrb", &sort2, sort);
	return (j);
}

void	check_stack_b(t_sort **sort2, t_sort *tmp)
{
	t_sort *walk;
	t_sort *need;
	int diff;
	int go;

	need = NULL;
	go = 0;
	walk = (*sort2);
	diff = INT32_MIN;
	while (walk)
	{
		go = tmp->data - walk->data;
		if (go > diff && go > 0)
		{
			diff = go;
			need = walk;
		}
		walk = walk->next;
	}
	walk = (*sort2);
	diff = INT32_MIN;
	if (need == NULL)
	{
		while (walk)
		{
			go = tmp->data - walk->data;
			if (go > diff)
			{
				diff = go;
				need = walk;
			}
			walk = walk->next;
		}
	}
	make_up(sort2, need, go);
}

void 	choose_number(t_sort **sort, t_sort **sort2, int count_one, int count_two, t_sort *one, t_sort *two)
{
	t_act act;
	int op_next;
	int op_prev;
	char *str = malloc(sizeof(char) * 5);
	int i;
	int op;

	i = 0;
	op = 0;
	if (count_one == count_two)
	{
		if (one->data < two->data)
			count_one = INT32_MIN;
		else
			count_two = INT32_MIN;
	}
	if (count_one < count_two)
	{
		op_next = count_op_next(one);
		op_prev = count_op_prev(one);
		str = op_next <= op_prev ? "next" : "prev";
		act.op_b = find_place3_b2(&one, sort2, &act);
		if (ft_strcmp("next", str) == 0)
		{
			act.op_a = op_next;
			act.str_a = 1;
			if (act.str_a == act.str_b)
			{
				if (act.op_a > act.op_b) {
					while (act.op_b > 0) {
						do_action("rrr", sort, sort2);
						act.op_b--;
						act.op_a--;
					}
					while (act.op_a > 0) {
						do_action("rra", sort, sort2);
						act.op_a--;
					}
				}
				else if (act.op_a <= act.op_b)
				{
					while (act.op_a > 0) {
						do_action("rrr", sort, sort2);
						act.op_a--;
						act.op_b--;
					}
					while (act.op_b > 0) {
						do_action("rrb", sort, sort2);
						act.op_b--;
					}
				}
			}
			else
			{

			while (i < op_next)
			{
//				if ((sort2) && (*sort2) && (*sort2)->next && ((*sort)->next->data - (*sort)->data) < 10 && ((*sort)->next->data - (*sort)->data > 0) && ((*sort2)->next->data - (*sort2)->data) > -10 && ((*sort2)->next->data - (*sort2)->data < 0))
//					do_action("ss", sort, sort2);
//				if ((sort2) && (*sort2) && (*sort2)->next && ((*sort)->next->data - (*sort)->data) < 10 && ((*sort)->next->data - (*sort)->data > 0))
//					do_action("sa", sort, sort2);
				do_action("rra", sort, sort2);
	//			display_list(*sort);
				i++;
			}
				if (sort2 && (*sort2))// && (*sort2)->next)
					find_place3_b(sort, sort2);
			}
/*			if (sort2 && (*sort2) && ((*sort2)->next))
			{
				if (((*sort2)->data > one->data))
				{
					do_action("rb", sort, sort2);
				}
			}*/
		}
		if (ft_strcmp("prev", str) == 0)
		{
			act.op_a = op_prev;
			act.str_a = 0;
			if (act.str_a == act.str_b)
			{
				if (act.op_a > act.op_b) {
					while (act.op_b > 0) {
						do_action("rr", sort, sort2);
						act.op_b--;
						act.op_a--;
					}
					while (act.op_a > 0) {
						do_action("ra", sort, sort2);
						act.op_a--;
					}
				}
				else if (act.op_a <= act.op_b)
				{
					while (act.op_a > 0) {
						do_action("rr", sort, sort2);
						act.op_a--;
						act.op_b--;
					}
					while (act.op_b > 0) {
						do_action("rb", sort, sort2);
						act.op_b--;
					}
				}
			} else
			{
			while (i < op_prev)
			{
//				if ((sort2) && (*sort2) && (*sort)->next && ((*sort)->next->data - (*sort)->data) < 10 && ((*sort)->next->data - (*sort)->data > 0) && ((*sort2)->next->data - (*sort2)->data) > -10 && ((*sort2)->next->data - (*sort2)->data < 0))
//					do_action("ss", sort, sort2);
//				if ((sort2) && (*sort2) && (*sort)->next && ((*sort)->next->data - (*sort)->data) < 10 && ((*sort)->next->data - (*sort)->data > 0))
//					do_action("sa", sort, sort2);
				do_action("ra", sort, sort2);
		//		display_list(*sort);
				i++;
			}
				if (sort2 && (*sort2))// && (*sort2)->next)
					find_place3_b(sort, sort2);
			}
		}
/*		while ((*sort2)->data > one->data)
		{
			do_action("rra", sort, sort2);
		}*/
		/*if (sort2 && (*sort2) && ((*sort2)->next))
		{
			if (((*sort2)->data > one->data))
			{
				do_action("rb", sort, sort2);
			}
		}
		if (sort2 && (*sort2) && ((*sort2)->next))
		{
			if (((*sort2)->data > one->data))
			{
				do_action("rb", sort, sort2);
			}
		}*/
	//	check_stack_b(sort2, one);
//		if (sort2 && (*sort2) && (*sort2)->next)
//			find_place3_b(sort, sort2);
		do_action("pb", sort, sort2);
	}
	else
	{
		op_next = count_op_next(two);
		op_prev = count_op_prev(two);
		str = op_next <= op_prev ? "next" : "prev";
		act.op_b = find_place3_b2(&two, sort2, &act);
		if (ft_strcmp("next", str) == 0)
		{
			act.op_a = op_next;
			act.str_a = 1;
			if (act.str_a == act.str_b)
			{
				if (act.op_a > act.op_b) {
					while (act.op_b > 0) {
						do_action("rrr", sort, sort2);
						act.op_b--;
						act.op_a--;
					}
					while (act.op_a > 0) {
						do_action("rra", sort, sort2);
						act.op_a--;
					}
				}
				else if (act.op_a <= act.op_b)
				{
					while (act.op_a > 0) {
						do_action("rrr", sort, sort2);
						act.op_a--;
						act.op_b--;
					}
					while (act.op_b > 0) {
						do_action("rrb", sort, sort2);
						act.op_b--;
					}
				}
			} else{
				while (i < op_next) {
//				if (((*sort)->next->data - (*sort)->data) < 10 && ((*sort)->next->data - (*sort)->data > 0) && ((*sort2)->next->data - (*sort2)->data) > -10 && ((*sort2)->next->data - (*sort2)->data < 0))
//					do_action("ss", sort, sort2);
//				if (((*sort)->next->data - (*sort)->data) < 10 && ((*sort)->next->data - (*sort)->data > 0))
//					do_action("sa", sort, sort2);
					do_action("rra", sort, sort2);
					//		display_list(*sort);

					i++;
				}
				if (sort2 && (*sort2))// && (*sort2)->next)
					find_place3_b(sort, sort2);
			}
		}
		if (ft_strcmp("prev", str) == 0)
		{
			act.op_a = op_prev;
			act.str_a = 0;
			if (act.str_a == act.str_b)
			{
				if (act.op_a > act.op_b) {
					while (act.op_b > 0) {
						do_action("rr", sort, sort2);
						act.op_b--;
						act.op_a--;
					}
					while (act.op_a > 0) {
						do_action("ra", sort, sort2);
						act.op_a--;
					}
				}
				else if (act.op_a <= act.op_b)
				{
					while (act.op_a > 0) {
						do_action("rr", sort, sort2);
						act.op_a--;
						act.op_b--;
					}
					while (act.op_b > 0) {
						do_action("rb", sort, sort2);
						act.op_b--;
					}
				}
			} else {
				while (i < op_prev) {
//				if (((*sort)->next->data - (*sort)->data) < 10 && ((*sort)->next->data - (*sort)->data > 0) && ((*sort2)->next->data - (*sort2)->data) > -10 && ((*sort2)->next->data - (*sort2)->data < 0))
//					do_action("ss", sort, sort2);
//				if (((*sort)->next->data - (*sort)->data) < 10 && ((*sort)->next->data - (*sort)->data > 0))
	//				do_action("sa", sort, sort2);
				do_action("ra", sort, sort2);
					//		display_list(*sort);
					i++;
				}
				if (sort2 && (*sort2))// && (*sort2)->next)
					find_place3_b(sort, sort2);
			}
		}
/*		if (sort2 && (*sort2) && ((*sort2)->next))
		{
			if (((*sort2)->data > one->data))
			{
				do_action("rb", sort, sort2);
			}
		}*/
//		if ((*sort2) && (*sort2)->next)
//			find_place3_b(sort, sort2);
//		check_stack_b(sort2, two); //для первого сортировочного алгоритма
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
		{
			tmp2 = tmp;
			return (tmp2);
		}

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

	p = 0;
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
	int stack[11] = {45, 90, 135, 180, 225, 270, 315, 360, 405, 450, 500};
//	int stack[25] = {60, 105, 150, 195, 240, 280, 325, 370, 415, 450, 500};
//	int stack[25] = {20, 40, 60, 80, 100, 120, 140, 150, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400, 420, 440, 460, 500};
	char *instr[1000];
	int i;
	int j;

	i = 0;
	j = 0;

	while (i < 25) //для каждой группы выполняем необходимый код
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
/*	tmp = (*sort2);
	while (tmp)
	{
		if (tmp->data > max)
		{
			max = tmp->data;
			one = tmp;
		}
		tmp = tmp->next;
	}
	*/ //make_up(sort2, one, 0); //для первого сортировочного алгоритма*/
//	int p = last_make_up(sort, sort2);
	int p = push_everything(sort, sort2);// для первого сортировочного алгоритма
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
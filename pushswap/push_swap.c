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

void	push_swap(t_sort **sort, t_sort **sort2) {
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
	while (*sort2)
	{
		do_action("pa", sort, sort2);
		display_list(*sort);
		instr[j] = "pa";
		j++;
	}
	instr[j] = "\0";
	i = 0;
	while (instr[i] != "\0")
	{
		printf("%s\n", instr[i]);
		i++;
	}
}
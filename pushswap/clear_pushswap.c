#include "push_swap.h"

void clear_make(t_sort **sort, t_sort **sort2, t_sort *need) {
	int op_next;
	int op_prev;
	char *str;
	int i;
	t_act act;

	i = 0;
	op_next = count_op_next(need);
	op_prev = count_op_prev(need);
	str = op_next <= op_prev ? "next" : "prev";
	if (ft_strcmp("next", str) == 0) {
		act.op_b = op_next;
		act.str_b = 1;
		while (i < op_next) {
//			do_action("rrb", sort, sort2);
			i++;
		}
	}
	if (ft_strcmp("prev", str) == 0) {
		act.op_b = op_prev;
		act.str_b = 0;
		while (i < op_prev) {
//			do_action("rb", sort, sort2);
			i++;
		}
	}
	t_sort *tmp;
	t_sort *need2;
	int op;

	tmp = (*sort2);
	need2 = NULL;
	if (check_biggest(&need, sort) && check_smallest(&need, sort))
	{
		while (tmp && (need)->data > tmp->data)
		{
			tmp = tmp->next;
			need2 = tmp;
		}
//		if (need != NULL)
//			need = tmp->next;
		if (need2 == NULL)
		{
			while (tmp && (need)->data < tmp->data)
			{
				tmp = tmp->next;
				need2 = tmp;
			}
			while (tmp && (need)->data > tmp->data)
			{
				tmp = tmp->next;
				need2 = tmp;
			}
		}
		if (need2 != NULL)
		{
			op_next = count_op_next(need2);
			op_prev = count_op_prev(need2);
			str = op_next <= op_prev ? "next" : "prev";
			if (ft_strcmp("next", str) == 0) {
				act.op_a = op_next;
				act.str_a = 1;
				while (i < op_next) {
					//			do_action("rra", sort, sort2);
					i++;
				}
			}
			if (ft_strcmp("prev", str) == 0) {
				act.op_a = op_prev;
				act.str_a = 0;
				while (i < op_prev) {
					//				do_action("ra", sort, sort2);
					i++;
				}
			}
		}
	} else if (check_biggest(&need, sort)) {
		int min;
		int j;

		j = 0;
		tmp = (*sort);
		min = INT32_MAX;
		need = NULL;
		while (tmp) {
			if (tmp->data <= min) {
				min = tmp->data;
				need = tmp;
			}
			tmp = tmp->next;
		}
		if (need != NULL) {
			op_next = count_op_next(need);
			op_prev = count_op_prev(need);
			str = op_next <= op_prev ? "next" : "prev";
			if (ft_strcmp("next", str) == 0) {
				act.op_a = op_next;
				act.str_a = 1;
				while (i < op_next) {
					//				do_action("rra", sort, sort2);
					i++;
				}
			}
			if (ft_strcmp("prev", str) == 0) {
				act.op_a = op_prev;
				act.str_a = 0;
				while (i < op_prev) {
//					do_action("ra", sort, sort2);
					i++;
				}
			}
		}
//		make_sorted(sort, sort);
	} else if (check_smallest(&need, sort)) {
		int min;
		int j;

		j = 0;
		tmp = (*sort);
		min = INT32_MAX;
		need = NULL;
		while (tmp) {
			if (tmp->data <= min) {
				min = tmp->data;
				need = tmp;
			}
			tmp = tmp->next;
		}
		if (need != NULL) {
			op_next = count_op_next(need);
			op_prev = count_op_prev(need);
			str = op_next <= op_prev ? "next" : "prev";
			if (ft_strcmp("next", str) == 0) {
				act.op_a = op_next;
				act.str_a = 1;
				while (i < op_next) {
//					do_action("rra", sort, sort2);
					i++;
				}
			}
			if (ft_strcmp("prev", str) == 0) {
				act.op_a = op_prev;
				act.str_a = 0;
				while (i < op_prev) {
//					do_action("ra", sort, sort2);
					i++;
				}
			}
		}
//		make_sorted(sort, sort);
	}
	if (act.str_a == act.str_b && act.str_a) {
		if (act.op_a > act.op_b) {
			while (act.op_b > 0) {
				if (act.str_a == 0)
					do_action("rr", sort, sort2);
				else
					do_action("rrr", sort, sort2);
				act.op_b--;
				act.op_a--;
			}
			while (act.op_a > 0) {
				if (act.str_a == 0)
					do_action("ra", sort, sort2);
				else
					do_action("rra", sort, sort2);
				act.op_a--;
			}
		} else if (act.op_a <= act.op_b) {
			while (act.op_a > 0) {
				if (act.str_a == 0)
					do_action("rr", sort, sort2);
				else
					do_action("rrr", sort, sort2);
				act.op_a--;
				act.op_b--;
			}
			while (act.op_b > 0) {
				if (act.str_a == 0)
					do_action("rb", sort, sort2);
				else
					do_action("rrb", sort, sort2);
				act.op_b--;
			}
		}
	} else {
		while (act.op_a > 0) {
			if (act.str_a == 0)
				do_action("ra", sort, sort2);
			else
				do_action("rra", sort, sort2);
			act.op_a--;
		}
		while (act.op_b > 0) {
			if (act.str_a == 0)
				do_action("rb", sort, sort2);
			else
				do_action("rrb", sort, sort2);
			act.op_b--;
		}
//	find_place3_b(sort2, sort);
	}
	do_action("pa", sort, sort2);
}

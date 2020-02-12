#include "push_swap.h"

void     push_swap(t_sort **sort, t_sort **sort2, t_swap *swap)
{
	while ((*sort)->next->next)
	{
		if ((*sort)->next->next == NULL)
			break;
		if ((*sort)->data == 0 || (*sort)->data == 500)
			do_action("ra", sort, sort2);
		if (((*sort)->data) < 250 && (*sort)->data != 0 && (*sort)->data != 500)
			do_action("pb", sort, sort2);
		else
		{
			if ((*sort)->data != 0 && (*sort)->data != 500)
			{
				do_action("pb", sort, sort2);
				do_action("rb", sort, sort2);
			}
		}
	}

}

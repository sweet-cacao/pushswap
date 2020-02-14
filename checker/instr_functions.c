#include "push_swap.h"

t_list 		*get_next_list(t_list *map)
{
	if (map == NULL)
		return NULL;
	while (map->next)
		map = map->next;
	return (map);
}

t_list      *add_block_list(char *data)
{
	t_list  *list;

	list = malloc(sizeof(t_list));
	list->content = data;
	list->next = NULL;
	return (list);
}

void    push_end_list(char *data, t_list **instr)
{
	t_list *last;
	t_list *tmp;

	last = get_next_list(*instr);
	tmp = add_block_list(data);
	if (last == NULL)
		(*instr) = add_block_list(data);
	else
		last->next = tmp;
}
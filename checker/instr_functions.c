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
	int i;

	i = 0;
	list = malloc(sizeof(t_list));
	list->content = data;
//	ft_strdel(&data);
	list->next = NULL;
	return (list);
}

void    push_end_list(char *data, t_list **instr)
{
	t_list *last;
	t_list *tmp;

	last = get_next_list(*instr);

	if (last == NULL)
		(*instr) = add_block_list(data);
	else
	{
		tmp = add_block_list(data);
		last->next = tmp;
	}

}

void	instr_del(t_list **sort)
{
	t_list *next;

	if (!sort || !(*sort))
		return;
	while (*sort)
	{
		next = (*sort)->next;
		free((*sort));
		(*sort) = next;
	}
	if (*sort)
		free(*sort);
	sort = NULL;
}
#include "push_swap.h"

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
int 		actual_command(char *buff)
{
	int i;


	i = 0;
	char *arr[11] = {"sa", "sb", "ss", "pa", "pb", "ra", "rb", "rr", "rra", "rrb", "rrr"};
	if (ft_strcmp(buff, "\0") == 0)
		return (1);
	while (i < 11)
	{
		if (!ft_strcmp(buff, arr[i]))
			return (1);
		i++;
	}
	return (0);
}

t_sort 		*get_next(t_sort *map)
{
    if (map == NULL)
        return NULL;
    while (map->next)
        map = map->next;
    return map;
}

t_sort      *add_block(int data)
{
    t_sort  *sort;

    sort = malloc(sizeof(t_sort));
    sort->data = data;
    sort->next = NULL;
    sort->prev = NULL;
    return (sort);
}

void     push_end(int data, t_sort **sort)
{
    t_sort  *last;
    t_sort  *tmp;

    last = get_next(*sort);
    tmp = add_block(data);
    if (last == NULL)
    {
		(*sort) = tmp;
    }
    else
    {
        last->next = tmp;
        last->next->prev = last;
    }

}

void      push_front(int data, t_sort **sort)
{
    t_sort  *tmp;
    t_sort *head;

    if ((*sort) == NULL)
		(*sort) = add_block(data);
    else
    {
        tmp = add_block(data);
        if (*sort)
			(*sort)->prev = tmp;
        tmp->next = (*sort);
		(*sort) = tmp;
    }
}

void	delete_first(t_sort **sort)
{
	t_sort *tmp;


	tmp = (*sort);
	if (!tmp->next)
	{
		(*sort) = NULL;
		return;
	}
	(*sort) = (*sort)->next;
	(*sort)->prev = NULL;
	//free(tmp);
}

void 	delete_last(t_sort **sort)
{
	t_sort *tmp;

	tmp = (*sort);
/*	if (!tmp->next)
	{
		(*sort) = NULL;
		return;
	}*/
	while (tmp->next->next)
	{
		tmp = tmp->next;
	}
	tmp->next->prev = NULL;
	tmp->next = NULL;
}

void	sort_del(t_sort **sort)
{
	t_sort *tmp;
	t_sort *next;


	if (!sort || !(*sort))
		return;
	tmp = *sort;
	while (tmp)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	*sort = NULL;
}
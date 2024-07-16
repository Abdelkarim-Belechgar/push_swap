#include "parsing.h"

bool	ft_is_sort(t_stack *head)
{
	size_t	index;

	index = 0;
	while (head)
	{
		if (head->index != index)
			return (true);
		head = head->next;
		index++;
	}
	return (false);
}

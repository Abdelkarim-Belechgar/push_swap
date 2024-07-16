#include "parsing.h"

bool	ft_is_duplicate(t_stack **head, int number, size_t *index)
{
	t_stack	*new;

	new = *head;
	while (new)
	{
		if (new->number < number)
			(*index)++;
		else
			new->index++;
		if (new->number == number)
			return (true);
		new = new->next;
	}
	return (false);
}

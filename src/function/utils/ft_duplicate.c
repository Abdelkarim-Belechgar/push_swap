#include "../../include/push_swap.h"
#include "../../include/checker.h"

bool	ft_duplicate(t_stack *head, int nbr, size_t *idx)
{
	*idx = 0;
	while (head)
	{
		if (head->nbr < nbr)
			(*idx)++;
		else
			head->idx++;
		if (head->nbr == nbr)
			return (true);
		head = head->next;
	}
	return (false);
}

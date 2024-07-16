#include "operation.h"

void	sa_swap(t_stack **a)
{
	void	*node;

	if (a && *a && (*a)->next)
	{
		node = (*a)->next;
		(*a)->next = (*a)->next->next;
		((t_stack *)node)->next = *a;
		*a = node;
	}
}

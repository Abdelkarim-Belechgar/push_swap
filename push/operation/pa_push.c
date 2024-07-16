#include "operation.h"

void	pa_push(t_stack **a, t_stack **b)
{
	void	*node;

	if (*b)
	{
		node = *b;
		*b = (*b)->next;
		((t_stack *)node)->next = *a;
		*a = node;
	}
}

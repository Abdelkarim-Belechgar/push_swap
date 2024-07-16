#include "operation.h"

void	pb_push(t_stack **a, t_stack **b)
{
	void	*node;

	if (*a)
	{
		node = *a;
		*a = (*a)->next;
		((t_stack *)node)->next = *b;
		*b = node;
	}
}

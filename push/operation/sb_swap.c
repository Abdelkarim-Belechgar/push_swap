#include "operation.h"

void	sb_swap(t_stack **b)
{
	void	*node;

	if (b && *b && (*b)->next)
	{
		node = (*b)->next;
		(*b)->next = (*b)->next->next;
		((t_stack *)node)->next = *b;
		*b = node;
	}
}

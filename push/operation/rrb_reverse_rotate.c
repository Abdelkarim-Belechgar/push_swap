#include "operation.h"

void	rrb_reverse_rotate(t_stack **b)
{
	void	*new;
	void	*node;

	if (*b && (*b)->next)
	{
		new = *b;
		while (((t_stack *)new)->next->next)
			new = ((t_stack *)new)->next;
		node = ((t_stack *)new)->next;
		((t_stack *)new)->next = NULL;
		((t_stack *)node)->next = *b;
		*b = node;
	}
}

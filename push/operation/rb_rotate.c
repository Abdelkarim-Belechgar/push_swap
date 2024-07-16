#include "operation.h"

void	rb_rotate(t_stack **b)
{
	void	*new;
	void	*node;

	if (*b && (*b)->next)
	{
		node = *b;
		*b = (*b)->next;
		new = *b;
		while (((t_stack *)new)->next)
			new = ((t_stack *)new)->next;
		((t_stack *)new)->next = node;
		((t_stack *)node)->next = NULL;
	}
}

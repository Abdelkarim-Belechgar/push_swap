#include "operation.h"

void	rra_reverse_rotate(t_stack **a)
{
	void	*new;
	void	*node;

	if (*a && (*a)->next)
	{
		new = *a;
		while (((t_stack *)new)->next->next)
			new = ((t_stack *)new)->next;
		node = ((t_stack *)new)->next;
		((t_stack *)new)->next = NULL;
		((t_stack *)node)->next = *a;
		*a = node;
	}
}

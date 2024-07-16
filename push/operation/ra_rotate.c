#include "operation.h"

void	ra_rotate(t_stack **a)
{
	void	*new;
	void	*node;

	if (*a && (*a)->next)
	{
		node = *a;
		*a = (*a)->next;
		new = *a;
		while (((t_stack *)new)->next)
			new = ((t_stack *)new)->next;
		((t_stack *)new)->next = node;
		((t_stack *)node)->next = NULL;
	}
}

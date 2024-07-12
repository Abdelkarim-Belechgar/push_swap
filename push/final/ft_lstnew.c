#include "push_swap.h"

t_stack	*ft_lstnew(int number, size_t index)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->number = number;
	node->index = index;
	node->next = NULL;
	return (node);
}

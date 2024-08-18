#include "../push_swap.h"

t_stack	*ft_lstnew(int nbr, size_t idx)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->nbr = nbr;
	node->idx = idx;
	node->next = NULL;
	return (node);
}

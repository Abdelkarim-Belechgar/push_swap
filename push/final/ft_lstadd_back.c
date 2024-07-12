#include "push_swap.h"

void	ft_lstadd_back(t_stack **head, t_stack *new)
{
	t_stack	*node;

	node = *head;
	if (!head || !*head)
	{
		*head = new;
		return ;
	}
	while (node->next)
		node = node->next;
	node->next = new;
}

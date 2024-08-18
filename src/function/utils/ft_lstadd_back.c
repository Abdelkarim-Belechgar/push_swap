#include "../../include/push_swap.h"
#include "../../include/checker.h"

void	ft_lstadd_back(t_stack **head, t_stack *new)
{
	t_stack	*node;

	if (!head || !*head)
	{
		*head = new;
		return ;
	}
	node = *head;
	while (node->next)
		node = node->next;
	node->next = new;
}

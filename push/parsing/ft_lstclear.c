#include "push_swap.h"

void	ft_lstclear(t_stack **head)
{
	t_stack	*tmp;

	if (head)
	{
		while (*head)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
		}
	}
}

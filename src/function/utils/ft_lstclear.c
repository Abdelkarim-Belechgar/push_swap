#include "../../include/push_swap.h"
#include "../../include/checker.h"

void	ft_lstclear(t_stack **head)
{
	void	*temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}

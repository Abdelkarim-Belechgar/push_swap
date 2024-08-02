#include "../push_swap.h"

void	ft_lstclear(t_stack **head)
{
	void	*temp;

	if (head)
	{
		while (*head)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
		}
	}
}

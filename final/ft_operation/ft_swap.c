#include "../push_swap.h"

void	ft_swap_a(t_stack **head, bool flag)
{
	void	*temp;

	if (head && *head && (*head)->next)
	{
		temp = (*head)->next;
		(*head)->next = (*head)->next->next;
		((t_stack *)temp)->next = *head;
		*head = temp;
		if (flag)
			ft_putstr("sa\n", 1);
	}
}

void	ft_swap_b(t_stack **head, bool flag)
{
	void	*temp;

	if (head && *head && (*head)->next)
	{
		temp = (*head)->next;
		(*head)->next = (*head)->next->next;
		((t_stack *)temp)->next = *head;
		*head = temp;
		if (flag)
			ft_putstr("sb\n", 1);
	}
}

void	ft_swap_ab(t_stack **a, t_stack **b, bool flag)
{
	ft_swap_a(a, false);
	ft_swap_b(b, false);
	if (flag)
		ft_putstr("ss\n", 1);
}

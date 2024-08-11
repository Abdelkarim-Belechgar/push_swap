#include "../push_swap.h"

void	ft_reverse_a(t_stack **head, bool flag)
{
	void *new;
	void *node;

	if (head && *head && (*head)->next)
	{
		new = *head;
		while (((t_stack *)new)->next->next)
			new = ((t_stack *)new)->next;
		node = ((t_stack *)new)->next;
		((t_stack *)new)->next = NULL;
		((t_stack *)node)->next = *head;
		*head = node;
		if (flag)
			ft_puststr("rra\n", 1);
	}
}

void	ft_reverse_b(t_stack **head, bool flag)
{
	void *new;
	void *node;

	if (head && *head && (*head)->next)
	{
		new = *head;
		while (((t_stack *)new)->next->next)
			new = ((t_stack *)new)->next;
		node = ((t_stack *)new)->next;
		((t_stack *)new)->next = NULL;
		((t_stack *)node)->next = *head;
		*head = node;
		if (flag)
			ft_puststr("rrb\n", 1);
	}
}

void	ft_reverse_ab(t_stack **a, t_stack **b, bool flag)
{
	ft_reverse_a(a, false);
	ft_reverse_b(b, false);
	if (flag)
		ft_puststr("rrr\n", 1);
}

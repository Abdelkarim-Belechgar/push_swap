#include "../push_swap.h"

void	ft_rotat_a(t_stack **head, bool flag)
{
	void *new;
	void *node;

	if (*head && (*head)->next)
	{
		node = *head;
		*head = (*head)->next;
		new = *head;
		while (((t_stack *)new)->next)
			new = ((t_stack *)new)->next;
		((t_stack *)new)->next = node;
		((t_stack *)node)->next = NULL;
		if (flag)
			ft_putstr("ra\n", 1);
	}
}

void	ft_rotat_b(t_stack **head, bool flag)
{
	void *new;
	void *node;

	if (*head && (*head)->next)
	{
		node = *head;
		*head = (*head)->next;
		new = *head;
		while (((t_stack *)new)->next)
			new = ((t_stack *)new)->next;
		((t_stack *)new)->next = node;
		((t_stack *)node)->next = NULL;
		if (flag)
			ft_putstr("rb\n", 1);
	}
}

void	ft_rotat_ab(t_stack **a, t_stack **b, bool flag)
{
	ft_rotat_a(a, false);
	ft_rotat_b(b, false);
	if (flag)
		ft_putstr("rr\n", 1);

}

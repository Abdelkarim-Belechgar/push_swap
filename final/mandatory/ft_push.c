#include "../push_swap.h"

void	ft_pa(t_stack **a, t_stack **b, bool flag)
{
	void	*node;

	if (b && *b)
	{
		node = *b;
		*b = (*b)->next;
		((t_stack *)node)->next = *a;
		*a = node;
		if (flag)
			ft_putstr("pa\n", 1);
	}
}

void	ft_pb(t_stack **a, t_stack **b, bool flag)
{
	void	*node;

	if (a && *a)
	{
		node = *a;
		*a = (*a)->next;
		((t_stack *)node)->next = *b;
		*b = node;
		if (flag)
			ft_putstr("pb\n", 1);
	}
}

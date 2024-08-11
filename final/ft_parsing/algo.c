#include "../push_swap.h"

void	sort_three(t_stack **a, int size)
{
	if (size == 3)
	{
		if ((*a)->idx > (*a)->next->idx && (*a)->idx > (*a)->next->next->idx)
			ft_ra(a, true);
		else if ((*a)->next->idx > (*a)->idx && (*a)->next->idx > (*a)->next->next->idx)
			ft_rra(a, true);
	}
	if ((*a)->idx > (*a)->next->idx)
		ft_sa(a, true);
}

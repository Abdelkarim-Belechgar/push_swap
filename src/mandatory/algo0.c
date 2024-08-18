#include "../include/push_swap.h"

bool	calcul(t_stack *head, int size)
{
	int	z;
	int	flag;

	z = 0;
	flag = 0;
	while (head)
	{
		if ((flag == 2 && size == 5) || (flag == 1 && size == 4))
			break ;
		else if (head->idx != 0 && head->idx != 1)
			z++;
		else
			flag++;
		head = head->next;
	}
	if (size == 5 && z == 3)
		return (false);
	if (size == 4 && z >= 2)
		return (false);
	return (true);
}

void	sort_three(t_stack **a, int size)
{
	size_t	idx;

	idx = (*a)->next->idx;
	if (size == 3)
	{
		if ((*a)->idx > idx && (*a)->idx > (*a)->next->next->idx)
			ft_ra(a, true);
		else if (idx > (*a)->idx && idx > (*a)->next->next->idx)
			ft_rra(a, true);
	}
	idx = (*a)->next->idx;
	if ((*a)->idx > idx)
		ft_sa(a, true);
}

void	sort_five(t_stack **a, t_stack **b, int size)
{
	if (size == 5)
	{
		while ((*a)->idx != 0 && (*a)->idx != 1)
		{
			if (calcul(*a, 5))
				ft_ra(a, true);
			else
				ft_rra(a, true);
		}
		ft_pb(a, b, true);
	}
	while ((*a)->idx != 0 && (*a)->idx != 1)
	{
		if (calcul(*a, 4))
			ft_ra(a, true);
		else
			ft_rra(a, true);
	}
	ft_pb(a, b, true);
	sort_three(a, 3);
	if (size == 5)
		ft_pa(a, b, true);
	ft_pa(a, b, true);
	sort_three(a, 2);
}

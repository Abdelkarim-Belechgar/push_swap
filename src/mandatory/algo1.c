#include "../include/push_swap.h"

void	swap_tow_close(t_stack **head, bool flag)
{
	if (flag)
	{
		if ((*head)->idx == ((*head)->next->idx + 1))
			ft_sa(head, true);
	}
	else
	{
		if (((*head)->idx + 1) == (*head)->next->idx)
			ft_sb(head, true);
	}
}

int	get_position(t_stack *head, size_t size)
{
	size_t	idx;

	idx = 0;
	while (head)
	{
		if (head->idx == size)
			break ;
		idx++;
		head = head->next;
	}
	if (idx == 0)
		return (0);
	if (idx <= (size / 2))
		return (1);
	return (2);
}

void	complite_algo(t_stack **a, t_stack **b)
{
	size_t	size;
	int		position;

	while (*b)
	{
		size = ft_lstsize(*b);
		if (size > 1)
			position = get_position(*b, size - 1);
		else
			position = 0;
		if (!position)
			ft_pa(a, b, true);
		else if (position == 1)
			ft_rb(b, true);
		else
			ft_rrb(b, true);
	}
}

void	range_algo(t_stack **a, t_stack **b, size_t end, size_t size)
{
	size_t	start;

	start = 0;
	while (size--)
	{
		if (size > 1)
			swap_tow_close(a, true);
		if ((*a)->idx <= end)
		{
			ft_pb(a, b, true);
			if (*a && (*b)->idx < start)
				ft_rb(b, true);
			if (start)
				swap_tow_close(b, false);
			start++;
			end++;
		}
		else
		{
			ft_ra(a, true);
			size++;
		}
	}
	complite_algo(a, b);
}

void	sort_end(t_stack **a, t_stack **b, size_t size)
{
	if (size <= 100)
		range_algo(a, b, size / 6, size);
	else
		range_algo(a, b, size / 15, size);
}

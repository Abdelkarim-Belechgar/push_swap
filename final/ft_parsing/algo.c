#include "../push_swap.h"

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
int	get_position(t_stack *head, int size)
{
	int	idx;

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
	if (idx <= size / 2)	//rb
		return (1);
	return (2);
}

void	complite_algo(t_stack **a, t_stack **b)
{
	int	size;
	int	position;
	
	while (*b && (size = ft_lstsize(*b)))
	{
		position = get_position(*b, size -1);
		if (!position)
			ft_pa(a, b, true);
		else if (position == 1)
			ft_rb(b, true);
		else
			ft_rrb(b, true);
	}
}

void	range_algo(t_stack **a, t_stack **b, int end, int size)
{
	int	start;

	start = 0;
	while (size--)
	{
	//	if (size > 1)
	//		swap_tow_close(a, true);
		if ((*a)->idx <= end)
		{
			ft_pb(a, b, true);
			if (*a && (*a)->idx < start)
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

void	sort_end(t_stack **a, t_stack **b, int size)
{
	if (size <= 100)
		range_algo(a, b, 15, size);
	else if (size <= 200)
		range_algo(a, b, 20, size);
	else if (size <= 300)
		range_algo(a, b, 30, size);
	else if (size <= 400)
		range_algo(a, b, 40, size);
	else
		range_algo(a, b, 50, size);
}

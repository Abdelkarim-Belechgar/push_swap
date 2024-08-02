#include "../push_swap.h"

void	ft_error(t_stack **a, t_stack **b)
{
	ft_lstclear(a);
	ft_lstclear(b);
	ft_putstr("Error\n", 2);
	exit(EXIT_FAILURE);
}

#include "push_swap.h"

void	check_args(char **argv, t_stack **head)
{
	t_stack	*new;
	size_t	index;
	int		number;

	while (*argv)
	{
		new = NULL;
		if (ft_is_numeric(*argv, head, &number, &index))
		{
			new = ft_lstnew(number, index);
			if (!new)
				ft_error(head, NULL);
			ft_lstadd_back(head, new);
		}
		else
			ft_error(head, NULL);
		argv++;
	}
	if (!ft_is_sort(*head))
		ft_error(head, NULL);
}

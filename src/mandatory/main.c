#include "../include/push_swap.h"

void	push_swap(char **argv)
{
	t_stack	*a;
	t_stack	*b;
	size_t	size;

	b = NULL;
	a = NULL;
	while (*(++argv))
		ft_split(*argv, &a);
	size = ft_lstsize(a);
	if (size > 1)
	{
		if (size < 4)
			sort_three(&a, size);
		else if (size < 6)
			sort_five(&a, &b, size);
		else
			sort_end(&a, &b, size);
	}
	ft_lstclear(&a);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		push_swap(argv);
	else
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

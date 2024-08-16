#include "../push_swap.h"
#include <stdio.h>
void	ft_print(t_stack *head)
{
	size_t	z;

	z = 0;
	while (head)
	{
		printf("head->nbr[%zu] = %d\n", z, head->nbr);
		printf("head->idx[%zu] = %zu\n", z, head->idx);
		printf("************************\n");
		z++;
		head = head->next;
	}
	printf("stack has ben save successfuly\n");
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	size_t	size;

	b = NULL;
	a = NULL;
	if (argc > 1)
	{
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
//		ft_putstr("*** stack_a ***\n", 1);
//		ft_print(a);
//		ft_putstr("*** stack_b ***\n", 1);
//		ft_print(b);
		ft_lstclear(&a);
		ft_lstclear(&b);
//		printf("stack has ben clear successfuly\n");
	}
	else
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

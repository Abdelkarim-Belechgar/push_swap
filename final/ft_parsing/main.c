#include "../push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack	*head;
	t_stack	*node;

	head = NULL;
	if (argc > 1)
	{
		while (*(++argv))
			ft_split(*argv, &head);
		node = head;
		size_t	z = 0;
		while (node)
		{
			printf("node->nbr[%u] = %d\n", z, node->nbr);
			printf("node->idx[%u] = %d\n", z, node->idx);
			printf("************************\n");
			z++;
			node = node->next;
		}
		ft_lstclear(&head);
		printf("stack has ben save successfuly\n");
	}
	else
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

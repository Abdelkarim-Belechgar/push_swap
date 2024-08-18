#include "../include/checker.h"

void	ft_printf(char *stack, t_stack *head)
{
	ft_putstr(stack, 1);
	while (head)
	{
		ft_putstr("head->nbr = ", 1);
		ft_putnbr(head->nbr);
		ft_putchar('\n', 1);
		ft_putstr("head->idx = ", 1);
		ft_putnbr(head->idx);
		ft_putchar('\n', 1);
		head = head->next;
	}
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
		if (size > 1 && checker(&a, &b))
		{
			ft_printf("*** stack a ***\n", a);
			ft_printf("*** stack b ***\n", b);
		}
		else
			ft_putstr("Error\n", 1);
		ft_lstclear(&a);
		ft_lstclear(&b);
	}
	else
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

#include "push_swap.h"

void	ft_print(t_stack *head)
{
	while (head)
	{
		ft_putstr("**********************\n");
		ft_putstr("number =  ");
		ft_putnbr(head->number);
		ft_putchar('\n');
		ft_putstr("index =  ");
		ft_putnbr(head->index);
		ft_putchar('\n');
		head = head->next;
	}
}

int	main(int argc, char **argv)
{
	static t_stack	*a;
	static t_stack	*b;

	(void)b;
	if (argc > 1)
	{
		check_args(++argv, &a);
		ft_print(a);
		ft_lstclear(&a);
		ft_putstr("**********************\n");
		ft_putstr("stack has bes save successefuly\n");
	}
	else
		exit(EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

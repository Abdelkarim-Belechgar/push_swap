#include "push_swap.h"

int	check_value(char *content, char *value)
{
	while (*value)
	{
		if (*content > *value)
			return (0);
		else if (*content == *value)
		{
			content++;
			value++;
			if (!*value)
				return (2);
		}
		else
			break ;
	}
	return (1);
}

bool	is_integer(char *content, int *number, bool sign)
{
	if (!*number || *number > 10)
		return (true);
	else if (*number == 10)
	{
		if (sign)
			*number = check_value(content, "2147483648");
		else
			*number = check_value(content, "2147483647");
		if (!*number)
			return (true);
	}
	return (false);
}

bool	is_numeric(char *content, t_stack **head, int *number, size_t *index)
{
	bool	sign;

	*number = 0;
	*index = 0;
	sign = false;
	if (*content == '-' || *content == '+')
	{
		if (*content == '-')
			sign = true;
		content++;
	}
	while (*(content + *number) >= 48 && *(content + *number) <= 57)
		(*number)++;
	if (*(content + *number) || is_integer(content, number, sign))
		return (false);
	if (*number == 2 && sign)
		*number = -2147483648;
	if (*number == 2 && !sign)
		*number = 2147483647;
	else
		*number = ft_atoi(content, sign);
	if (ft_is_duplicate(head, *number, index))
		return (false);
	return (true);
}

void	check_argc(char **argv, t_stack **head)
{
	t_stack	*new;
	size_t	index;
	int		number;

	while (*argv)
	{
		new = NULL;
		if (is_numeric(*argv, head, &number, &index))
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

int	main(int argc, char **argv)
{
	static t_stack	*a;
	static t_stack	*b;
	t_stack			*new;

	(void)b;
	if (argc > 1)
	{
		check_argc(++argv, &a);
		new = a;
		while (new)
		{
			ft_putstr("**********************", 1);
			ft_putstr("number =  ", 0);
			ft_putnbr(new->number);
			ft_putchar('\n');
			ft_putstr("index =  ", 0);
			ft_putnbr(new->index);
			ft_putchar('\n');
			new = new->next;
		}
		ft_lstclear(&a);
		ft_putstr("stack has bes save successefuly", 1);
	}
	else
		exit(EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

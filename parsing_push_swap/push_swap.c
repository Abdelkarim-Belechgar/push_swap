#include "push_swap.h"

bool	ft_strcmp(char *content1, char *content2)
{
	int	len;
	int	new;

	new = 0;
	len = ft_strlen(content2);
	while (*content1 && *content2)
	{
		if (*content1 == *content2)
		{
			new++;
		}
		content1++;
		content2++;
	}
	if (len == new)
	{
		return (false);
	}
	return (true);

}

bool	check_duplicate(t_stack *head, t_stack *new)
{
	bool	check;

	while (head)
	{
		check = ft_strcmp(head->content, new->content);
		if (!check)
		{
			return (false);
		}
		else
		{
			head = head->next;
		}
	}
	return (true);
}

void	check_args(int argc, char **argv, t_stack **a)
{
	t_stack	*new;
	int	number;

	while (--argc)
	{
		new = NULL;
		number = check_is_numeric(*(++argv));
		if (number)
		{
			new = create_new_node(*argv);
			if (!new || !check_max_and_min_value(new->content) || !check_duplicate(*a, new))
			{
				ft_error(a, NULL);
			}
			add_new_node_back(a, new);
		}
		else
		{
			ft_error(a, NULL);
		}
	}
}

int	main(int argc, char **argv)
{	
	t_stack	*a;
	t_stack	*new;

	a = NULL;
	if (argc > 1)
	{
		check_args(argc, argv, &a);
		new = a;
		while (new)
		{
			ft_putstr(new->content, 1);
			new = new->next;
		}
		ft_free(&a);
	}
	return (EXIT_SUCCESS);
}

#include "push_swap.h"

void	ft_free(t_stack **head)
{
	t_stack	*swap;

	if (head)
	{
		while (*head)
		{
			swap = (*head)->next;
			free(*head);
			*head = swap;
		}
	}
}

void	ft_error(t_stack **a, t_stack **b)
{
	ft_free(a);
	ft_free(b);
	ft_putstr("Error", 1);
	exit(EXIT_FAILURE);
}

t_stack	*create_new_node(char *content)
{
	t_stack	*node;

	node = (t_stack*)malloc(sizeof(t_stack));
	if (!node)
	{
		return (NULL);
	}
	if (*content == '+')
	{
		content++;
	}
	node->index = 0;
	node->content = content;
	node->number = 0;
	node->next = NULL;
	return (node);
}

void	add_new_node_back(t_stack **head, t_stack *new)
{
	t_stack	*node;

	if (!new)
	{
		return ;
	}
	else if (!head || !*head)
	{
		*head = new;
		return ;
	}
	node = *head;
	while (node->next)
	{
		node = node->next;
	}
	node->next = new;
}

bool	check_value(char *content, char *value)
{
	int	len;

	len = 0;
	while (content[len])
	{
		if (content[len] < value[len])
		{
			break ;
		}
		else if (content[len] > value[len])
		{
			return (false);
		}
		len++;
	}
	return (true);
}

bool	check_max_and_min_value(char *content)
{
	int	len;
	bool	sign;

	sign = true;
	if (*content == '-')
	{
		content++;
		sign = false;
	}
	len = ft_strlen(content);
	if (len > 10)
	{
		return (false);
	}
	else if (len < 10)
	{
		return (true);
	}
	if (sign)
	{
		sign = check_value(content, "2147483647");
	}
	else
	{
		sign = check_value(content, "2147483648");
	}
	return (sign);

}

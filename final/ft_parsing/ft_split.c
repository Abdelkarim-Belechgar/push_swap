#include "../push_swap.h"
#include <stdio.h>
#include <stdbool.h>

size_t	ft_skip_spaces(char *str)
{
	size_t	z;

	z = 0;
	while (*str && (*str == ' ' || *str == '\t'))
	{
		str++;
		z++;
	}
	return (z);
}

bool	ft_is_duplicate(t_stack **head, int nbr, size_t *idx)
{
	t_stack	*new;

	*idx = 0;
	new = *head;
	while (new)
	{
		if (new->nbr < nbr)
			(*idx)++;
		else
			new->idx++;
		if (new->nbr == nbr)
			return (true);
		new = new->next;
	}
	return (false);
}

int	ft_atoi(char *str, bool sign)
{
	int	result;

	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - 48;
		str++;
	}
	if (sign)
		result *= -1;
	return (result);
}

size_t	check_value(char *str, char *value)
{
	while (*value)
	{
		if (*str == *value)
		{
			str++;
			value++;
			if (!*value)
				return (10);
		}
		else if (*str > *value)
			return (0);
		else
			break;
	}
	return (1);
}

bool	ft_is_integer(char *str, size_t z, bool sign, size_t *idx)
{
	if (*(str + z) && *(str + z) != ' ' && *(str + z) != '\t')
		return (true);
	if (sign && z == 10)
		*idx = check_value(str, "2147483648");
	else if (!sign && z == 10)
		*idx = check_value(str, "2147483647");
	else
		*idx = 1;
	if (*idx)
		return (false);
	return (true);
}

size_t	ft_is_numeric(char **str, t_stack **head, int *nbr, size_t *idx)
{
	bool	sign;
	size_t	z;

	z = 0;
	sign = false;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			sign = true;
		(*str)++;
	}
	while (*(*str + z) >= 48 && *(*str + z) <= 57)
		z++;
	if (!z || z > 10 || ft_is_integer(*str, z, sign, idx))
		return (0);
	if (*idx == 10 && sign)
		*nbr = -2147483648;
	else if (*idx == 10 && !sign)
		*nbr = 2147483647;
	else
		*nbr = ft_atoi(*str, sign);
	if (ft_is_duplicate(head, *nbr, idx))
		return (0);
	return (z);
}

t_stack	*ft_lstnew(int nbr, size_t idx)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->nbr = nbr;
	node->idx = idx;
	node->next = NULL;
	return (node);
}

void	ft_lstadd_back(t_stack **head, t_stack *new)
{
	t_stack	*node;

	node = *head;
	if (!node)
	{
		*head = new;
		return ;
	}
	while (node->next)
		node = node->next;
	node->next = new;
}

void	ft_lstclear(t_stack **head)
{
	t_stack	*temp;

	if (head)
	{
		while (*head)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
		}
	}
}

void	ft_error(t_stack **a, t_stack **b)
{
	ft_lstclear(a);
	ft_lstclear(b);
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	ft_split(char *str, t_stack **head)
{
	t_stack	*new;
	int	nbr;
	size_t	idx;
	size_t	spaces;

	while (*str)
	{
		new = NULL;
		str += ft_skip_spaces(str);
		spaces = ft_is_numeric(&str, head, &nbr, &idx);
		if (spaces)
		{
			new = ft_lstnew(nbr, idx);
			if (!new)
				ft_error(head, NULL);
			ft_lstadd_back(head, new);
		}
		else
			ft_error(head, NULL);
		str += spaces;
		str += ft_skip_spaces(str);
	}
}

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

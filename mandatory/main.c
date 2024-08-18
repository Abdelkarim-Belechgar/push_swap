/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:33:55 by abelechg          #+#    #+#             */
/*   Updated: 2024/08/18 16:33:56 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_printf(t_stack *head)
{
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

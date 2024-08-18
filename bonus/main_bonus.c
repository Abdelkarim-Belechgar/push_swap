/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:30:07 by abelechg          #+#    #+#             */
/*   Updated: 2024/08/18 16:30:10 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker_bonus.h"

void	checker(char **argv)
{
	t_stack	*a;
	t_stack	*b;
	size_t	size;

	b = NULL;
	a = NULL;
	while (*(++argv))
		ft_split(*argv, &a);
	size = ft_lstsize(a);
	if (size > 1 && read_input(&a, &b))
	{
		size = ft_lstsize(a);
		if (size == 1 && !b)
			ft_putstr("OK\n", 1);
		else
			ft_putstr("KO\n", 1);
	}
	else
		ft_error(&a, &b);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		checker(argv);
	else
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

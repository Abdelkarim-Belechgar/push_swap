/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:30:42 by abelechg          #+#    #+#             */
/*   Updated: 2024/08/18 16:30:43 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/stack.h"

void	ft_pa(t_stack **a, t_stack **b, bool flag)
{
	void	*node;

	if (*b)
	{
		node = *b;
		*b = (*b)->next;
		((t_stack *)node)->next = *a;
		*a = node;
		if (flag)
			ft_putstr("pa\n", 1);
	}
}

void	ft_pb(t_stack **a, t_stack **b, bool flag)
{
	void	*node;

	if (*a)
	{
		node = *a;
		*a = (*a)->next;
		((t_stack *)node)->next = *b;
		*b = node;
		if (flag)
			ft_putstr("pb\n", 1);
	}
}

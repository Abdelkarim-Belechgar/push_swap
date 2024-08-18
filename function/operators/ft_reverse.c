/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:30:49 by abelechg          #+#    #+#             */
/*   Updated: 2024/08/18 16:30:50 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/stack.h"

void	ft_rra(t_stack **head, bool flag)
{
	void	*new;
	void	*node;

	if (*head && (*head)->next)
	{
		new = *head;
		while (((t_stack *)new)->next->next)
			new = ((t_stack *)new)->next;
		node = ((t_stack *)new)->next;
		((t_stack *)new)->next = NULL;
		((t_stack *)node)->next = *head;
		*head = node;
		if (flag)
			ft_putstr("rra\n", 1);
	}
}

void	ft_rrb(t_stack **head, bool flag)
{
	void	*new;
	void	*node;

	if (*head && (*head)->next)
	{
		new = *head;
		while (((t_stack *)new)->next->next)
			new = ((t_stack *)new)->next;
		node = ((t_stack *)new)->next;
		((t_stack *)new)->next = NULL;
		((t_stack *)node)->next = *head;
		*head = node;
		if (flag)
			ft_putstr("rrb\n", 1);
	}
}

void	ft_rrr(t_stack **a, t_stack **b, bool flag)
{
	ft_rra(a, false);
	ft_rrb(b, false);
	if (flag)
		ft_putstr("rrr\n", 1);
}

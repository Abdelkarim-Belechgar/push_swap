/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:31:02 by abelechg          #+#    #+#             */
/*   Updated: 2024/08/18 16:31:04 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/stack.h"

void	ft_ra(t_stack **head, bool flag)
{
	void	*new;
	void	*node;

	if (*head && (*head)->next)
	{
		node = *head;
		*head = (*head)->next;
		new = *head;
		while (((t_stack *)new)->next)
			new = ((t_stack *)new)->next;
		((t_stack *)new)->next = node;
		((t_stack *)node)->next = NULL;
		if (flag)
			ft_putstr("ra\n", 1);
	}
}

void	ft_rb(t_stack **head, bool flag)
{
	void	*new;
	void	*node;

	if (*head && (*head)->next)
	{
		node = *head;
		*head = (*head)->next;
		new = *head;
		while (((t_stack *)new)->next)
			new = ((t_stack *)new)->next;
		((t_stack *)new)->next = node;
		((t_stack *)node)->next = NULL;
		if (flag)
			ft_putstr("rb\n", 1);
	}
}

void	ft_rr(t_stack **a, t_stack **b, bool flag)
{
	ft_ra(a, false);
	ft_rb(b, false);
	if (flag)
		ft_putstr("rr\n", 1);
}

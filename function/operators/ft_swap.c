/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:31:09 by abelechg          #+#    #+#             */
/*   Updated: 2024/08/18 16:31:11 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/stack.h"

void	ft_sa(t_stack **head, bool flag)
{
	void	*temp;

	if (*head && (*head)->next)
	{
		temp = (*head)->next;
		(*head)->next = (*head)->next->next;
		((t_stack *)temp)->next = *head;
		*head = temp;
		if (flag)
			ft_putstr("sa\n", 1);
	}
}

void	ft_sb(t_stack **head, bool flag)
{
	void	*temp;

	if (*head && (*head)->next)
	{
		temp = (*head)->next;
		(*head)->next = (*head)->next->next;
		((t_stack *)temp)->next = *head;
		*head = temp;
		if (flag)
			ft_putstr("sb\n", 1);
	}
}

void	ft_ss(t_stack **a, t_stack **b, bool flag)
{
	ft_sa(a, false);
	ft_sb(b, false);
	if (flag)
		ft_putstr("ss\n", 1);
}

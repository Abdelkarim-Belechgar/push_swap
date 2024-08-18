/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:32:39 by abelechg          #+#    #+#             */
/*   Updated: 2024/08/18 16:32:40 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/stack.h"

void	ft_lstclear(t_stack **head)
{
	void	*temp;

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

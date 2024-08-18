/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_duplicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:31:58 by abelechg          #+#    #+#             */
/*   Updated: 2024/08/18 16:32:01 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/stack.h"

bool	ft_duplicate(t_stack *head, int nbr, size_t *idx)
{
	*idx = 0;
	while (head)
	{
		if (head->nbr < nbr)
			(*idx)++;
		else
			head->idx++;
		if (head->nbr == nbr)
			return (true);
		head = head->next;
	}
	return (false);
}

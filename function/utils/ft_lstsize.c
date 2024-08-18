/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:35:10 by abelechg          #+#    #+#             */
/*   Updated: 2024/08/18 16:35:13 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/stack.h"

size_t	ft_lstsize(t_stack *head)
{
	size_t	size;
	size_t	sort;

	sort = 0;
	size = 0;
	while (head)
	{
		if (head->next && head->idx < head->next->idx)
			sort++;
		size++;
		head = head->next;
	}
	if (size == sort + 1)
		return (1);
	return (size);
}

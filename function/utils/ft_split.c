/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:33:28 by abelechg          #+#    #+#             */
/*   Updated: 2024/08/18 16:33:30 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/stack.h"

void	ft_split(char *str, t_stack **head)
{
	t_stack	*new;
	int		nbr;
	size_t	idx;
	size_t	spaces;

	str += ft_skip_spaces(str);
	if (!*str)
		ft_error(head, NULL);
	while (*str)
	{
		new = NULL;
		spaces = ft_numeric(&str, *head, &nbr, &idx);
		if (spaces)
		{
			new = ft_lstnew(nbr, idx);
			if (!new)
				ft_error(head, NULL);
			ft_lstadd_back(head, new);
		}
		else
			ft_error(head, NULL);
	}
}

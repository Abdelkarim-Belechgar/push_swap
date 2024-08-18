/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numeric.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:33:13 by abelechg          #+#    #+#             */
/*   Updated: 2024/08/18 16:33:15 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/stack.h"

bool	ft_numeric(char **str, t_stack *head, int *nbr, size_t *idx)
{
	bool	sign;
	size_t	len;

	len = 0;
	sign = false;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			sign = true;
		(*str)++;
	}
	while (*(*str + len) >= 48 && *(*str + len) <= 57)
		len++;
	if (!len || len > 10 || ft_integer(*str + len, len, sign, idx))
		return (false);
	if (*idx == 10 && sign)
		*nbr = -2147483648;
	else if (*idx == 10 && !sign)
		*nbr = 2147483647;
	else
		*nbr = ft_atoi(*str, sign);
	if (ft_duplicate(head, *nbr, idx))
		return (false);
	*str += (len + ft_skip_spaces(*str + len));
	return (true);
}

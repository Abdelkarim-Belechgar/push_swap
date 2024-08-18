/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:32:19 by abelechg          #+#    #+#             */
/*   Updated: 2024/08/18 16:32:21 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/stack.h"

bool	ft_integer(char *str, size_t z, bool sign, size_t *idx)
{
	if (*str && *str != ' ' && *str != '\t' && *str != '\n')
		return (true);
	if (z == 10)
	{
		if (sign)
			*idx = ft_strcmp((str - z), "2147483648");
		else
			*idx = ft_strcmp((str - z), "2147483647");
		if (!*idx)
			return (true);
	}
	else
		*idx = 1;
	return (false);
}

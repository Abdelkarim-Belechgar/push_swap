/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:33:36 by abelechg          #+#    #+#             */
/*   Updated: 2024/08/18 16:33:37 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/stack.h"

size_t	ft_strcmp(char *str, char *value)
{
	while (*value)
	{
		if (*str == *value)
		{
			if (!value)
				return (10);
			str++;
			value++;
		}
		else if (*str > *value)
			return (0);
		else
			break ;
	}
	return (1);
}

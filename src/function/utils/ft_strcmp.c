#include "../../include/push_swap.h"
#include "../../include/checker.h"

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

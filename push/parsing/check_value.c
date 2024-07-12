#include "push_swap.h"

size_t	check_value(char *content, char *value)
{
	while (*value)
	{
		if (*content > *value)
			return (0);
		else if (*content == *value)
		{
			content++;
			value++;
			if (!*value)
				return (2);
		}
		else
			break ;
	}
	return (1);
}

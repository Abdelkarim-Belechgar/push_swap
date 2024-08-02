#include "../push_swap.h"

size_t	ft_skip_spaces(char *str)
{
	size_t	len;

	len = 0;
	while (*str && (*str == ' ' || *str == '\t'))
	{
		str++;
		len++;
	}
	return (len);
}

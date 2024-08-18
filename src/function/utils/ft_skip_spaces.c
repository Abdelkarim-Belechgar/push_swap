#include "../../include/push_swap.h"
#include "../../include/checker.h"

size_t	ft_skip_spaces(char *str)
{
	size_t	len;

	len = 0;
	while (*str && (*str == ' ' || *str == '\t' || *str == '\n'))
	{
		str++;
		len++;
	}
	return (len);
}

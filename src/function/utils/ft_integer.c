#include "../../include/push_swap.h"
#include "../../include/checker.h"

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

#include "../push_swap.h"

bool	ft_integer(char *str, size_t z, bool sign, size_t *idx)
{
	if (!z || z > 10 || (*(str + z) && *(str + z) != ' ' && *(str + z) != '\t'))
		return (true);
	if (z == 10)
	{
		if (sign)
			*idx = ft_strcmp(str, "2147483648");
		else
			*idx = ft_strcmp(str, "2147483647");
		if (!*idx)
			return (true);
	}
	else
		*idx = 1;
	return (false);
}

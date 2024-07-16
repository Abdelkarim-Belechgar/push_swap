#include "parsing.h"

bool	ft_is_integer(char *content, int *number, bool sign)
{
	if (!*number || *number > 10)
		return (true);
	else if (*number == 10)
	{
		if (sign)
			*number = check_value(content, "2147483648");
		else
			*number = check_value(content, "2147483647");
		if (!*number)
			return (true);
	}
	return (false);
}

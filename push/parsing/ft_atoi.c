#include "push_swap.h"

int	ft_atoi(char *content, bool sign)
{
	int	result;

	result = 0;
	while (*content)
	{
		result = result * 10 + *content - 48;
		content++;
	}
	if (sign)
		result *= -1;
	return (result);
}

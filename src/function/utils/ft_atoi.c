#include "../../include/push_swap.h"
#include "../../include/checker.h"

int	ft_atoi(char *str, bool sign)
{
	int	result;

	result = 0;
	while (*str >= 48 && *str <= 57)
	{
		result = result * 10 + *str - 48;
		str++;
	}
	if (sign)
		result *= -1;
	return (result);
}

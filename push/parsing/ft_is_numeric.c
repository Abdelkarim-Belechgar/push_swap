#include "parsing.h"

bool	ft_is_numeric(char *content, t_stack **head, int *number, size_t *index)
{
	bool	sign;

	*number = 0;
	*index = 0;
	sign = false;
	if (*content == '-' || *content == '+')
	{
		if (*content == '-')
			sign = true;
		content++;
	}
	while (*(content + *number) >= 48 && *(content + *number) <= 57)
		(*number)++;
	if (*(content + *number) || ft_is_integer(content, number, sign))
		return (false);
	if (*number == 2 && sign)
		*number = -2147483648;
	if (*number == 2 && !sign)
		*number = 2147483647;
	else
		*number = ft_atoi(content, sign);
	if (ft_is_duplicate(head, *number, index))
		return (false);
	return (true);
}

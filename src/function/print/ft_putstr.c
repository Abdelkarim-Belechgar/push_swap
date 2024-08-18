#include "../../include/push_swap.h"
#include "../../include/checker.h"

void	ft_putstr(char *str, int fd)
{
	while (*str)
	{
		ft_putchar(*str, fd);
		str++;
	}
}

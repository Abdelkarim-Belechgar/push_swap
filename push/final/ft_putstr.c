#include "push_swap.h"

void	ft_putstr(char *str, int nbr)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	if (nbr > 1)
	{
		ft_putstr(" :  ", 0);
		ft_putnbr(nbr);
	}
	if (nbr)
		ft_putchar('\n');
}

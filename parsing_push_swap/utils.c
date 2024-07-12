#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar("0123456789"[nbr % 10]);
}

void	ft_putstr(char *str, int nbr)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	if (nbr > 1)
	{
		ft_putstr(" = ", 0);
		ft_putnbr(nbr);
	}
	if (nbr)
		ft_putchar('\n');
}

bool	check_is_numeric(char *str)
{
	int	z;

	z = 0;
	if (*str == '-' || *str == '+')
	{
		str++;
	}
	while (*(str + z) >= '0' && *(str + z) <= '9')
	{
		z++;
	}
	if (*(str + z) || !z)
	{
		return (false);
	}
	return (true);
}

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				nbr;
	size_t			idx;
	struct s_stack	*next;
}		t_stack;

//	ft_printf
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);

//	ft_parsing
size_t	ft_skip_spaces(char *str);
void	ft_split(char *str, t_stack **head);

#endif

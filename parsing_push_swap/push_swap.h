#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>

typedef struct s_stack
{
	int				index;
	char			*content;
	unsigned int	number;
	struct s_stack	*next;
}		t_stack;

//	utils.c
int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nbr);
void	ft_putstr(char *str, int nbr);
bool	check_is_numeric(char *str);

//	error.c
void	ft_free(t_stack **hehad);
void	ft_error(t_stack **a, t_stack **b);
t_stack	*create_new_node(char *content);
void	add_new_node_back(t_stack **head, t_stack *new);
bool	check_max_and_min_value(char *content);

//	puch_swap.c
void	check_args(int argc, char **argv, t_stack **a);

#endif

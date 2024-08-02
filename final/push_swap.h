#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>

typedef struct s_stack
{
	int				nbr;
	size_t			idx;
	struct s_stack	*next;
}		t_stack;

//	ft_printf
void	ft_putchar(char c, int fd);
void	ft_putstr(char *str, int fd);
void	ft_putnbr(int nbr);

//	ft_parsing
int	ft_atoi(char *str, bool sign);
bool	ft_duplicate(t_stack *head, int nbr, size_t *idx);
void	ft_error(t_stack **a, t_stack **b);
bool	ft_integer(char *str, size_t z, bool sign, size_t *idx);
void	ft_lstadd_back(t_stack **head, t_stack *new);
void	ft_lstclear(t_stack **head);
t_stack	*ft_lstnew(int nbr, size_t idx);
bool	ft_numeric(char **str, t_stack *head, int *nbr, size_t *idx);
size_t	ft_strcmp(char *str, char *value);
size_t	ft_skip_spaces(char *str);
void	ft_split(char *str, t_stack **head);

#endif

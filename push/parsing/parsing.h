#ifndef PARSING_H
# define PARSING_H

# include "./../stack.h"

void	ft_putchar(char c);
void	ft_putnbr(int nbr);
void	ft_putstr(char *str);
void	ft_error(t_stack **a, t_stack **b);
int		ft_atoi(char *content, bool sign);
bool	ft_is_duplicate(t_stack **a, int number, size_t *index);
bool	ft_is_sort(t_stack *head);
t_stack	*ft_lstnew(int number, size_t index);
void	ft_lstadd_back(t_stack **head, t_stack *new);
void	ft_lstclear(t_stack **head);
size_t	check_value(char *content, char *value);
bool	ft_is_integer(char *content, int *number, bool sign);
bool	ft_is_numeric(char *content, t_stack **a, int *number, size_t *index);
void	check_args(char **argv, t_stack **head);
#endif

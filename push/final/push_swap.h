#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "unistd.h"
# include "stdlib.h"
# include "stdbool.h"

typedef struct s_stack
{
	size_t			index;
	int				number;
	struct s_stack	*next;
}	t_stack;

//	LIBFT				*****done
//	ft_putchar.c
void	ft_putchar(char c);
//	ft_putnbr.c
void	ft_putnbr(int nbr);
//	ft_putstr.c
void	ft_putstr(char *str, int nbr);
//	ft_error.c
void	ft_error(t_stack **a, t_stack **b);
//	ft_is_duplicate.c
bool	ft_is_duplicate(t_stack **a, int number, size_t *index);
//	ft_is_sort.c
bool	ft_is_sort(t_stack *head);
/////////////////////////////////////////////////
//	ft_lstnew.c
t_stack	*ft_lstnew(int number, size_t index);
//	ft_lstclear.c
void	ft_lstclear(t_stack **head);
//	ft_atoi.c
int		ft_atoi(char *content, bool sign);
//	ft_lstadd_back.c
void	ft_lstadd_back(t_stack **head, t_stack *new);
#endif

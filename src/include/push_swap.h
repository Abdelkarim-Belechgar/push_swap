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

//		operators	/function/operators/
void	ft_pa(t_stack **a, t_stack **b, bool flag);
void	ft_pb(t_stack **a, t_stack **b, bool flag);
void	ft_sa(t_stack **head, bool flag);
void	ft_sb(t_stack **head, bool flag);
void	ft_ss(t_stack **a, t_stack **b, bool flag);
void	ft_ra(t_stack **head, bool flag);
void	ft_rb(t_stack **head, bool flag);
void	ft_rr(t_stack **a, t_stack **b, bool flag);
void	ft_rra(t_stack **head, bool flag);
void	ft_rrb(t_stack **head, bool flag);
void	ft_rrr(t_stack **a, t_stack **b, bool flag);
//		print		/function/print/
void	ft_putchar(char c, int fd);
void	ft_putnbr(int nbr);
void	ft_putstr(char *str, int fd);
//		utils		/function/utils/
int		ft_atoi(char *str, bool sign);
bool	ft_duplicate(t_stack *head, int nbr, size_t *idx);
void	ft_error(t_stack **a, t_stack **b);
bool	ft_integer(char *str, size_t z, bool sign, size_t *idx);
void	ft_lstadd_back(t_stack **head, t_stack *new);
void	ft_lstclear(t_stack **head);
t_stack	*ft_lstnew(int nbr, size_t idx);
size_t	ft_lstsize(t_stack *head);
bool	ft_numeric(char **str, t_stack *head, int *nbr, size_t *idx);
size_t	ft_skip_spaces(char *str);
void	ft_split(char *str, t_stack **head);
size_t	ft_strcmp(char *str, char *value);
////////////////////////////////////////
bool	calcul(t_stack *head, int size);
void	sort_three(t_stack **head, int size);
void	sort_five(t_stack **a, t_stack **b, int size);
//	file name "algo1.c"
//	for sort more than 5 numbers
void	swap_tow_close(t_stack **head, bool flag);
int		get_position(t_stack *head, size_t size);
void	complite_algo(t_stack **a, t_stack **b);
void	range_algo(t_stack **a, t_stack **b, size_t end, size_t size);
void	sort_end(t_stack **a, t_stack **b, size_t size);
void	ft_print(t_stack *head);

#endif

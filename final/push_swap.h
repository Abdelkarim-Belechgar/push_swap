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

///////	ft_printf
//	print character
void	ft_putchar(char c, int fd);
//	print string
void	ft_putstr(char *str, int fd);
//	print number
void	ft_putnbr(int nbr);

///////	ft_parsing
//	convert string to intgere
int	ft_atoi(char *str, bool sign);
//	check number is duplicate and index numbers in stack a
bool	ft_duplicate(t_stack *head, int nbr, size_t *idx);
//	print \"Error\" and cleare all stacks -> EXIT_FALIURE
void	ft_error(t_stack **a, t_stack **b);
//	check number is integer and max ou min value of integer
bool	ft_integer(char *str, size_t z, bool sign, size_t *idx);
//	add t_stack \"*new\" to the list \"head\"
void	ft_lstadd_back(t_stack **head, t_stack *new);
//	cleare list \"head\"
void	ft_lstclear(t_stack **head);
//	calculat number of node in list
int	ft_lstsize(t_stack *head);
//	create new t_stack with number and index
t_stack	*ft_lstnew(int nbr, size_t idx);
//	check arg is numeric
bool	ft_numeric(char **str, t_stack *head, int *nbr, size_t *idx);
//	comapare to strings
size_t	ft_strcmp(char *str, char *value);
//	calculate number of spaces
size_t	ft_skip_spaces(char *str);
//	split arg is have more ther number
void	ft_split(char *str, t_stack **head);

///////	ft_operation
//	push : first stack from stack \"b\" to stack \"a\" if flag is true print \"pa\"
void	ft_pa(t_stack **a, t_stack **b, bool flag);
//	push : first stack from stack \"a\" to stack \"b\" if flag is true print \"pb\"
void	ft_pb(t_stack **a, t_stack **b, bool flag);
//	reverse : tack the last element on stack to top of stack if flag is true print \"rra\"
void	ft_rra(t_stack **head, bool flag);
//	reverse : tack the last element on stack to top of stack if flag is true print \"rrb\"
void	ft_rrb(t_stack **head, bool flag);
//	reverse : tack the last element on 2 stack to top of 2 stack if flag is true print \"rrr\"
void	ft_rrr(t_stack **a, t_stack **b, bool flag);
//	rotat : tack the top element on stack to last of stack if flag is true print \"ra\"
void	ft_ra(t_stack **head, bool flag);
//	rotat : tack the top element on stack to last of stack if flag is true print \"rb\"
void	ft_rb(t_stack **head, bool flag);
//	rotat : tack the top element on 2 stack to last of 2 stack if flag is true print \"rr\"
void	ft_rr(t_stack **a, t_stack **b, bool flag);
//	swap : the tow element from stack \"a\" if flag is true print \"sa\"
void	ft_sa(t_stack **head, bool flag);
//	swap : the tow element from stack \"b\" if flag is true print \"sb\"
void	ft_sb(t_stack **head, bool flag);
//	swap : the tow element from stack \"a\" and stack \"b\" if flag is true print \"ss\"
void	ft_ss(t_stack **a, t_stack **b, bool flag);

///////	algo
//	sort three
void	sort_three(t_stack **head, int size);

#endif

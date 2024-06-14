#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

typedef struct	s_list {
	char*		number;
	unsigned int	index;
	int		size;
	struct s_list*	next;
}		t_list;

#include <unistd.h>
#include <stdlib.h>

void		ft_putchar(char c);
void		ft_putnbr(int nbr);
void		ft_putstr(char *str, int nbr);
void		ft_error(char *error, char *str, int nbr);
unsigned int	ft_strlen(char *str);
void		ft_free(t_list** head);
void		add_new_node_back(t_list **head, t_list *new);
t_list		*create_new_node(char* str, int len);
int		check_value(char *str, char *vlaue);
int		handle_max_and_min_value(char *str, int z, int sign);
int		check_number(char *str);

#endif

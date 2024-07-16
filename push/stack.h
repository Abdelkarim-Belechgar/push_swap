#ifndef STACK_H
# define STACK_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>

typedef struct s_stack
{
	int				number;
	size_t			index;
	struct s_stack	*next;
}		t_stack;

#endif

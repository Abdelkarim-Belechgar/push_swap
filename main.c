#include "push_swap.h"
//	char*	number;
//	unsigned int	index;
//	unsigned int	data_structr

void	check_args(int argc, char** argv, t_list** head) {
	t_list*	new;
	int	number;

	while (--argc) {
		new = NULL;
		number = check_number(*(++argv));
		if (number) {
			new = create_new_node(*argv, number);
			if (!new) {
				ft_putstr("stack_a are fread", 1);
				ft_free(head);
				exit(EXIT_FAILURE);
			}
			add_new_node_back(head, new);
		}
		else if (!number) {
			ft_putstr("stack_a are fread", 1);
			ft_free(head);
			exit(EXIT_FAILURE);
		}
	}
}

int	main(int argc, char** argv) {
	t_list*	stack_a;
	t_list*	stack_b;
	t_list*	new;

	stack_a = NULL;
	stack_b = NULL;
	(void)stack_b;
	if (argc > 2) {
		check_args(argc, argv, &stack_a);
		new = stack_a;
		while (stack_a) {
			ft_putstr(stack_a->number, stack_a->size);
			stack_a = stack_a->next;
		}
		ft_free(&new);
	}
	else {
		ft_error("Kritika Error:  Not enough arguments provided.", "At least 3 arguments are required.", 1);
		exit(EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

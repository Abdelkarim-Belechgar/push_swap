#include "push_swap.h"

void	ft_putchar(char c) {
	write(1, &c, 1);
}

void	ft_putnbr(int nbr) {
	if (nbr > 9) {
		ft_putnbr(nbr / 10);
	}
	ft_putchar("0123456789"[nbr % 10]);
}

void	ft_putstr(char *str, int nbr) {
	while (*str) {
		ft_putchar(*str);
		str++;
	}
	if (nbr > 1) {
		ft_putstr(" = ", 0);
		ft_putnbr(nbr);
	}
	if (nbr) {
		ft_putchar('\n');
	}
}

void	ft_error(char* error, char* str, int nbr) {
	ft_putstr(error, 0);
	ft_putstr("  \"", 0);
	ft_putstr(str, 0);
	ft_putstr("\"", nbr);
}

unsigned int	ft_strlen(char *str) {
	unsigned int	len;

	len = 0;
	if (str) {
		while (str[len]) {
			len++;
		}
	}
	return (len);
}

void	ft_free(t_list** head) {
	t_list*	swap;

	while (*head) {
		ft_error("free", (*head)->number, 1);
		swap = (*head)->next;
		free(*head);
		*head = swap;
	}
}

void	add_new_node_back(t_list **head, t_list *new) {
	t_list	*node;

	if (!new) {
		return ;
	}
	if (!head || !*head) {
		*head = new;
		return;
	}
	node = *head;
	while (node->next) {
		node = node->next;
	}
	node->next = new;
}

t_list*	create_new_node(char* str, int len) {
	t_list*	new;

	new = (t_list*)malloc(sizeof(t_list));
	if (!new) {
		ft_putstr("Krikita Error: Memory allocation failed while trying to create a new node in the linked list.", 1);
		return (NULL);
	}
	new->size = len;
	new->number = str;
	return (new);
}

int	check_value(char *str, char *value) {
	int	z;

	z = 0;
	if (ft_strlen(str) != ft_strlen(value)) {
		return (0);
	}
	while (value[z]) {
		if (value[z] > str[z]) {
			z = ft_strlen(value);
			break ;
		}
		else if (value[z] < str[z]) {
			return (0);
		}
		z++;
	}
	return (z);
}

int	handle_max_and_min_value(char *str, int z, int sign) {
	int	flag;

	if ((z < 20 && sign) || (z < 19 && !sign)) {
		flag = 1;
	}
	else if (sign) {
		flag = check_value(str, "18446744073709551615");	
	}
	else {
		flag = check_value(str, "9223372036854775808");
	}
	if (!flag && (sign == 1 || !sign)) {
		str--;
	}
	if (!flag && sign) {
		ft_error("Kritika Error: Input value exceeds the maximum limit of 18,446,744,073,709,551,615 (unsigned long long int).", str, 1);
	}
	if (!flag && !sign) {
		ft_error("Kritika Error: Input value is less than the minimum limit of -9,223,372,036,854,775,808 (long long int).", str, 1);
	}
	return (flag);
}

int	check_number(char* str) {
	int	sign;
	int	z;

	z = 0;
	sign = 2;
	if (*str == '-' || *str == '+') {
		if (*str == '-') {
			sign = 0;
		}
		else if (*str == '+') {
			sign = 1;
		}
		str++;
	}
	while (*(str + z) && *(str + z) >= '0' && *(str + z) <= '9') {
		z++;
	}
	if (*(str + z) || !z || !handle_max_and_min_value(str, z, sign)) {
		if (*(str + z) || !z) {
			if (!sign || sign == 1) {
				str--;
			}
			ft_error("Kritika Error: The provided argument is not a valid numerical value.", str, 1);
		}
		return (0);
	}
	return (z);
}

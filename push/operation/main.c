#include "operation.h"
#include "../parsing/parsing.h"

void	ft_print(t_stack *a, t_stack *b)
{
	while (a || b)
	{
		if (a)
		{
			ft_putnbr(a->number);
			ft_putstr("\t\t| ");
			a = a->next;
		}
		else
			ft_putstr("++\t\t| ");
		if (b)
		{
			ft_putnbr(b->number);
			ft_putstr("\n");
			b = b->next;
		}
		else
			ft_putstr("++\n");
	}
}
int	main(void)
{
	t_stack	*a;
	t_stack	*b;
	t_stack	*new_a;
	t_stack	*new_b;

	a = NULL;
	b = NULL;
	///////////////////////////
	new_a = NULL;
	new_a = ft_lstnew(0, 2);
	ft_lstadd_back(&a, new_a);
	new_a = NULL;
	new_a = ft_lstnew(-5, 1);
	ft_lstadd_back(&a, new_a);
	new_a = NULL;
	new_a = ft_lstnew(-548411, 0);
	ft_lstadd_back(&a, new_a);
	new_a = NULL;
	new_a = ft_lstnew(10, 3);
	ft_lstadd_back(&a, new_a);
	//-----------------------//
	new_b = NULL;
	new_b = ft_lstnew(1, 2);
	ft_lstadd_back(&b, new_b);
	new_b = NULL;
	new_b = ft_lstnew(-2, 1);
	ft_lstadd_back(&b, new_b);
	new_b = NULL;
	new_b = ft_lstnew(-11, 0);
	ft_lstadd_back(&b, new_b);
	new_b = NULL;
	new_b = ft_lstnew(16, 3);
	ft_lstadd_back(&b, new_b);
	///////////////////////////
	ft_putstr("stack a\t\t| stack b\n");
	ft_print(a, b);					//	print stack a and b
	ft_putstr("****************************\n");
	/////////////////////////////////////////////
	rrb_reverse_rotate(&b);
	pa_push(&a, &b);
	ra_rotate(&a);
	pb_push(&a, &b);
	pb_push(&a, &b);
	rb_rotate(&b);
	rb_rotate(&b);
	pa_push(&a, &b);
	sa_swap(&a);
	rrb_reverse_rotate(&b);
	pa_push(&a, &b);
	sa_swap(&a);
	pb_push(&a, &b);
	sb_swap(&b);
	pa_push(&a, &b);
	rrb_reverse_rotate(&b);
	pa_push(&a, &b);
	rb_rotate(&b);
	pa_push(&a, &b);
	pa_push(&a, &b);
	/////////////////////////////////////////////
	ft_print(a, b);					//	print stack a and b
	ft_lstclear(&a);
	ft_lstclear(&b);
	return (0);
}

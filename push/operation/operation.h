#ifndef OPERATION_H
# define OPERATION_H

# include "../stack.h"

void	sa_swap(t_stack **a);			//	done
void	sb_swap(t_stack **b);			//	done
void	ss_swap(t_stack **a, t_stack **b);	//	done
void	pa_push(t_stack **a, t_stack **b);	//	done
void	pb_push(t_stack **a, t_stack **b);	//	done
void	ra_rotate(t_stack **a);			//	done
void	rb_rotate(t_stack **b);			//	done
void	rr_rotate(t_stack **a, t_stack **b);	//	done
void	rra_reverse_rotate(t_stack **a);
void	rrb_reverse_rotate(t_stack **b);
void	rrr_reverse_rotate(t_stack **a, t_stack **b);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:34:32 by abelechg          #+#    #+#             */
/*   Updated: 2024/08/18 16:34:33 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "stack.h"

//		algorithme0		/mandatory/		for sort last than 5 numbers 
bool	calcul(t_stack *head, int size);
void	sort_three(t_stack **head, int size);
void	sort_five(t_stack **a, t_stack **b, int size);
//		algorithme1		/mandatory/		for sort more than 6 numbers
void	swap_tow_close(t_stack **head, bool flag);
int		get_position(t_stack *head, size_t size);
void	complite_algo(t_stack **a, t_stack **b);
void	range_algo(t_stack **a, t_stack **b, size_t end, size_t size);
void	sort_end(t_stack **a, t_stack **b, size_t size);
//		push_swap	/mandatory/		principal function
void	push_swap(char **argv);

#endif

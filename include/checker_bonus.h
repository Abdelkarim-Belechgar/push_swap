/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:34:42 by abelechg          #+#    #+#             */
/*   Updated: 2024/08/18 16:34:44 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "stack.h"

//		checker_utils	/bonus/
int		take_opeartion(char c);
bool	move(t_stack **a, t_stack **b, int opr);
bool	tack_move_one(t_stack **a, t_stack **b, int opr);
bool	tack_move_two(t_stack **a, t_stack **b, int opr);
bool	read_input(t_stack **a, t_stack **b);
//		checker	/bonus/		principal function
void	checker(char **argv);

#endif

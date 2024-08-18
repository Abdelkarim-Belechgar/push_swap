#include "../include/checker.h"
//	p = 1;
//	s = 2;
//	r = 3;
//	a = 9;
//	b = 15;
///	ss	=	4; | 2 + 2
///	rr	=	6; | 3 + 3
///	rrr	=	9; | 3 + 3 + 3
///	pa	=	10; | 1 + 9
///	sa	=	11; | 2 + 9
///	ra	=	12; | 3 + 9
///	rra	=	15; | 3 + 3 + 9
///	pb	=	16; | 1 + 15
///	sb	=	17; | 2 + 15
///	rb	=	18; | 3 + 15
///	rrb	=	21; | 3 + 3 + 15
int	take_oepeartion(char c)
{
	if (c == 'p')
		return (1);
	else if (c == 's')
		return (2);
	else if (c == 'r')
		return (3);
	else if (c == 'a')
		return (9);
	else if (c == 'b')
		return (15);
	else if (c == '\n' || c == 4)
		return (0);
	else
		return (22);
}

bool	tack_move_one(t_stack **a, t_stack **b, int opr)
{
	if (opr == 4)
		ft_ss(a, b, false);
	else if (opr == 6)
		ft_rr(a, b, false);
	else if (opr == 9)
		ft_rrr(a, b, false);
	else if (opr == 10)
		ft_pa(a, b, false);
	else if (opr == 11)
		ft_sa(a, false);
	else if (opr == 12)
		ft_ra(a, false);
	else
		return (true);
	return (false);
}
bool	tack_move_two(t_stack **a, t_stack **b, int opr)
{
	if (opr == 15)
		ft_rra(a, false);
	else if (opr == 16)
		ft_pb(a, b, false);
	else if (opr == 17)
		ft_sb(b, false);
	else if (opr == 18)
		ft_rb(b, false);
	else if (opr == 21)
		ft_rrb(b, false);
	else
		return (true);
	return (false);
}

bool	general_move(t_stack **a, t_stack **b, int res)
{
	if (res >= 4 && res <= 12 && tack_move_one(a, b, res))
		return (true);
	if (res >= 15 && res <= 21 && tack_move_tow(a, b, res))
		return (true);
	return (false);
}

bool	checker(t_stack **a, t_stack **b)
{
	int		res;
	char	c;
	bool	error;

	error = true;
	res = 0;
	while (read(0, &c, 1))
	{
		if (error)
		{
			res += take_oepeartion(c);
			if (res > 21 || c == '\n')
			{
				if (res > 21 || (res > 3 && res < 22 && general_move(a, b, res)))
					error = false;
				res = 0;
			}
		}
	}
	if (res > 3 && res < 22 && general_move(a, b, res))
		error = false;
	return (error);
}

#include "../push_swpa.h"

int	ft_lstsize(t_stack *head)
{
	int	size;
	int	sort;

	sort = 0;
	size = 0;
	while (head)
	{
		if (head->next && head->idx < head->next->idx)
			sort++;
		size++;
		head = head->next;
	}
	if (size == sort + 1)
		return (1);
	return (size);
}

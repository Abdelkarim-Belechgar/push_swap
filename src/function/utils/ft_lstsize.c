#include "../../include/push_swap.h"
#include "../../include/checker.h"

size_t	ft_lstsize(t_stack *head)
{
	size_t	size;
	size_t	sort;

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

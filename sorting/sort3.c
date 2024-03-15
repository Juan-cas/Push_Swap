
#include "../push_swap.h"

void	sort3(t_list **stA)
{
	t_list	*fn;
	t_list	*sn;

	fn = *stA;
	sn = (*stA)->next;
	if (fn->fpos == 3)
		ra(stA, 'p');
	else if (sn->fpos == 3)
		rra(stA, 'p');
	if (fn->data > sn->data)
		sa(stA, 'p');
}

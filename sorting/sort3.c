
#include "../push_swap.h"

void	sort3(t_list **stA)
{
	t_list	*fn;
	t_list	*sn;
  int     highest;

  highest = biggest(stA);
	fn = *stA;
	sn = (*stA)->next;
	if (fn->data == highest)
		ra(stA, 'p');
	else if (sn->data == highest)
		rra(stA, 'p');
	if (fn->data > sn->data)
		sa(stA, 'p');
}

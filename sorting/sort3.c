
#include "../push_swap.h"

void	sort3(t_list **stA)
{
  if (issorted(stA))
    return ;
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
  fn = *stA;
	if ((*stA)->data > (*stA)->next->data)
		sa(stA, 'p');
}

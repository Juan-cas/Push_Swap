
#include "../push_swap.h"

void sort5(t_list **stA, t_list **stB)
{
  if (issorted(stA))
    return ;
  t_list  *node;
  int     i;

  node = find_smallest(stA);
  i = where_small(stA, node);
  if(i == 2)
    sa(stA, 'p');
  else if(i == 3)
  {
    ra(stA, 'p');
    sa(stA, 'p');
  }
  else if(i == 4)
  {
    rra(stA, 'p');
    rra(stA, 'p');
  }
  else if (i == 5)
    rra(stA, 'p');
  pb(stA,stB);
  sort4(stA, stB);
  pa(stA, stB);
}

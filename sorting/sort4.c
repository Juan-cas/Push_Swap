
#include "../push_swap.h"

void sort4(t_list **stA, t_list **stB)
{
  t_list *a;

  a = *stA;
  if (a->fpos == 1)
    pb(stA, stB);
  else if (a->next->fpos == 1)
  {
    ra(stA, 'p');
    pb(stA, stB);
  }
  else if (a->next->next->fpos == 1)
  {
    rra(stA, 'p');
    rra(stA, 'p');
    pb(stA, stB);
  }
  else
  {
    rra(stA, 'p');
    pb(stA, stB);
  }
  sort3(stA);
  pa(stA, stB);
}

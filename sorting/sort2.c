
#include "../push_swap.h"

void sort2(t_list **stA)
{
  t_list *node;

  node = *stA;
  if (node->fpos > node->next->fpos)
    sa(stA, 'p');
}

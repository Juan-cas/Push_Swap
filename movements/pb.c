
#include "../push_swap.h"

void pb(t_list **stA, t_list **stB)
{
  if (*stA == NULL)
    return ;
  t_list *firstnode;
  firstnode = *stA;
  *stA = (*stA)->next;
  firstnode->next = *stB;
  *stB = firstnode;
  write(1, "pb", 2);
}

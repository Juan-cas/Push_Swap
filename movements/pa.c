
#include "../push_swap.h"

void pa(t_list **stA, t_list **stB)
{
  if (*stB == NULL)
    return ;
  t_list *firstnode;

  firstnode = *stB;
  *stB = (*stB)->next;
  firstnode->next = *stA;
  *stA = firstnode;
  write(1, "pa", 2);
}

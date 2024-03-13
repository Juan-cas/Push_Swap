
#include "../push_swap.h"

int issorted(t_list **stA)
{
  t_list *firstnode;
  t_list *secondnode;
  
  firstnode = *stA;
  secondnode = (*stA)->next;
  while(secondnode->next != NULL)
  {
    if (firstnode->data > secondnode->data)
      return (1);
    secondnode = secondnode->next;
  }
  return (0);
}

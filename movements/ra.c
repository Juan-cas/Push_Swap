
#include "../push_swap.h"

void ra(t_list **stA, char c)
{
  if ((*stA)->next == NULL)
    return;
  t_list *firstnode;
  t_list *secondnode;

  firstnode = *stA;
  secondnode = *stA;
  while (secondnode->next != NULL)
  {
    secondnode = secondnode->next;
  }
  *stA = (*stA)->next;
  secondnode->next = firstnode;
  firstnode->next = NULL;
  if (c == 'p')
    write(1, "ra", 2);
}

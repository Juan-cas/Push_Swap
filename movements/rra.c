
#include "../push_swap.h"

void rra(t_list **stA, char c)
{
  if (*stA == NULL || (*stA)->next == NULL)
    return ;
  t_list *firstnode;
  t_list *secondnode;
  t_list *prevnode;

  firstnode = *stA;
  secondnode = *stA;
  while (secondnode->next != NULL)
  {
    prevnode = secondnode;
    secondnode = secondnode->next;
  }
  prevnode->next = NULL;
  secondnode->next = firstnode;
  *stA = secondnode;
  if (c == 'p')
    write(1, "rra", 3);
}

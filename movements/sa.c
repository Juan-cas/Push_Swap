
#include "../push_swap.h"

void sa(t_list **stA, char c)
{
  if (*stA == NULL || (*stA)->next == NULL)
    return ;
  t_list *firstnode;
  t_list *secondnode;

  firstnode = *stA;
  secondnode = (*stA)->next->next;
  *stA = (*stA)->next;
  (*stA)->next = firstnode;
  firstnode->next = secondnode;
  write (1, "hola", 4);
  if (c == 'p')
  {
    write(1, "sa", 2);
  }
}

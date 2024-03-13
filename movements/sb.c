
#include "../push_swap.h"

void sb(t_list **stB, char c)
{
  if (*stB == NULL || (*stB)->next == NULL)
    return ;
  t_list *firstnode;
  t_list *secondnode;

  firstnode = *stB;
  secondnode = (*stB)->next->next;
  *stB = (*stB)->next;
  (*stB)->next = firstnode;
  firstnode->next = secondnode;
  if (c == 'p')
    write (1, "sb", 2);
}


#include "../push_swap.h"

void rrb(t_list **stB, char c)
{
  if (*stB == NULL || (*stB)->next == NULL)
    return ;
  t_list *firstnode;
  t_list *secondnode;
  t_list *prevnode;

  firstnode = *stB;
  secondnode = *stB;
  while (secondnode->next != NULL)
  {
    prevnode = secondnode;
    secondnode = secondnode->next;
  }
  prevnode->next = NULL;
  secondnode->next = firstnode;
  *stB = secondnode;
  if (c == 'p')
    write (1, "rrb", 3);
}

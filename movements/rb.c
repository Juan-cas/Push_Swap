
#include "../push_swap.h"

void rb(t_list **stB, char c)
{ 
  if ((*stB)->next == NULL)
    return ;
  t_list *firstnode;
  t_list *secondnode;

  firstnode = *stB;
  secondnode = *stB;
  *stB = (*stB)->next;
  while (secondnode->next != NULL)
  {
    secondnode = secondnode->next;
  }
  firstnode->next = NULL;
  secondnode->next = firstnode;
  if (c == 'p')
    write (1, "rb", 2);
}


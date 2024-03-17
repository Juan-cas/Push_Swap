
#include "../push_swap.h"


int pibot(t_list **stack)
{
  t_list *node;
  int     j;
  int     i;

  i = 0;
  while (node->next != NULL)
  {
    if (node->fpos < node->next->fpos)
      i = node->next->fpos;
    node = node->next;
  }
  j = i / 2;
  return (j);
}


#include "../push_swap.h"

void indexing(t_list **stack)
{
  t_list  *node;
  int     i;

  i = 1;
  node = *stack;
  while (node != NULL)
  {
    node->pos = i;
    node = node->next;
  }
}


#include "../push_swap.h"

t_list *lastnode(t_list **stack)
{
  t_list *node;

  node = *stack;
  while (node->next != NULL)
    node = node->next;
  return (node);
}

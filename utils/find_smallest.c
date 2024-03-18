
#include "../push_swap.h"

t_list  *find_smallest(t_list **stack)
{
  t_list *nodeA;
  t_list *final_node;

  nodeA = *stack;
  while (nodeA->next != NULL)
  {
    if (nodeA->fpos < nodeA->next->fpos)
      final_node = nodeA;
    nodeA = nodeA->next;
  }
  if (nodeA->prev->fpos > nodeA->fpos)
    final_node = nodeA;
  return (final_node);
}

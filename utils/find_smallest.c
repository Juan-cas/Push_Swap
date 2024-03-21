
#include "../push_swap.h"

t_list  *find_smallest(t_list **stack)
{
  t_list *nodeA;
  t_list *final_node;
  int     i;

  i = 1;
  while (i < 3)
  {
    nodeA = *stack;
    final_node = NULL;
    while (nodeA != NULL)
    {
      if (nodeA->fpos == i)
      {
        final_node = nodeA;
        return (final_node);
      }
      nodeA = nodeA->next;
    }
    i++;
  }
  return (final_node);
}

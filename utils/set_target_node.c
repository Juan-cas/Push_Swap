
#include "../push_swap.h"

void sta(t_list **stA, t_list **stB)
{
  t_list *nodeA;
  t_list *nodeB;
  t_list *target_node;
  long    best_match;

  while (nodeB)
  {
    best_match = INT_MAX;
    nodeA = *stA;
    while (nodeA)
    {
      if (nodeA->fpos > nodeB->fpos
          && nodeA->fpos < best_match)
      {
        best_match = nodeA->fpos;
        target_node = nodeA;
      }
      nodeA = nodeA->next;
    }
    if (INT_MAX == best_match)
      nodeB->target_node = find_smallest(stA);
  }
}

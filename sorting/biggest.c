
#include "../push_swap.h"

int biggest(t_list **stA)
{
  int highest;
  t_list *node;

  node = *stA;
  highest = node->data;
  while (node->next != NULL)
  {
    if (node->data < node->next->data)
      highest = node->next->data;
    node = node->next;
  }
  return (highest);
}

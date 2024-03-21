
#include "../push_swap.h"

int where_small(t_list **stA, t_list *node)
{
  t_list  *comparer;
  int     i;

  comparer = *stA;
  i = 1;
  while (comparer)
  {
    if (comparer->data != node->data)
      i++;
    if (comparer->data == node->data)
      break ;
    comparer = comparer->next;
  }
  return (i);
}

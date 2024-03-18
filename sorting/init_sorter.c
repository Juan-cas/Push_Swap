
#include "../push_swap.h"

void sort4(t_list **stA, t_list **stB)
{
  t_list  *node;
  int     i;

  node = *stA;
  i = 1;
  while (node)
  {
    if (node->fpos != 1)
      i++;
    if (node->fpos == 1)
      break ;
    node = node->next;
  }
  
}

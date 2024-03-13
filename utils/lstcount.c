
#include "../push_swap.h"

int lstcount(t_list **stack)
{
  int i;
  t_list *node;

  i = 0;
  node = *stack;
  while (node != NULL)
    i++;
  return (i);  
}



#include "../push_swap.h"


static int backcheck(t_list **stack, int lstsize)
{
  //this function should check the list from the last node up until the median
  //so that we can compare the cheapest nodes of the first 10 numbers vs the last 10 numbers
  if (lstsize >=  )

}

static int frontcheck(t_list **stack, int lstsize)
{
// this function should check the list from the starting node until the number of nodes to check is met
  // and then return the position of the node in that chunk.
}

int lowestfpos(t_list **stack)
{
  int     i;
  int     lstsize;
  t_list  *node;

  i = 0;
  node = *stack;
  lstsize = lstcount(stack);
  while (node)
  {
    if (node->fpos > )
  }

}


#include "../push_swap.h"

void lstfree(t_list **stA)
{
  t_list *prev;

  while (*stA != NULL)
  {
    prev = *stA;
    *stA = (*stA)->next;
    free(prev);
  }
}

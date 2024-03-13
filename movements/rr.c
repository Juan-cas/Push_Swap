
#include "../push_swap.h"

void rr(t_list **stA, t_list **stB)
{
  if ((*stA)->next == NULL || (*stB)->next == NULL)
  return ;
  ra(stA, 'x');
  rb(stB, 'x');
  write(1, "rr", 2);
}

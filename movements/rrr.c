
#include "../push_swap.h"

void rrr(t_list **stA, t_list **stB)
{
  if (*stA == NULL || (*stA)->next == NULL)
    return ;
  if (*stB == NULL || (*stB)->next == NULL)
    return ;
  rra(stA, 'x');
  rrb(stB, 'x');
  write(1, "rrr", 3);
}

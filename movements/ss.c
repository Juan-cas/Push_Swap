
#include "../push_swap.h"

void ss(t_list **stA, t_list **stB)
{
  if (*stA == NULL || (*stA)->next == NULL)
    return ;
  if (*stB == NULL || (*stB)->next == NULL)
    return ;
  sa(stA, 'x');
  sb(stB, 'x');
  write(1, "ss", 2);
}

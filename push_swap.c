
#include "push_swap.h"

void push_swap(t_list **stackA, t_list **stackB)
{
  int i;

  i = lstcount(stackA);
  listprinter(stackB, 'B');
  if (i == 2)
    sort2(stackA);
  if (i == 3)
    sort3(stackA);
  listprinter(stackA, 'A');
  // if (i == 4)
    // ft_sort4(stackA, stackB);

}

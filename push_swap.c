
#include "push_swap.h"

void push_swap(t_list **stackA, t_list **stackB)
{
  int i;

  i = ft_lstcount(stackA);
  if (i == 2)
    ft_sort2(stackA);
  if (i == 3)
    ft_sort3(stackA, stackB);
  listprinter(stackA);
  if (i == 4)
    ft_sort4(&stackA, stackB);

}


#include "../push_swap.h"

void bubblesort(t_list **stA)
{
  t_list *comparer;
  t_list *compared;
  int     i;

  comparer = *stA;
  while (comparer == NULL)
  {
    compared = *stA;
    i = 1;
    while (compared != NULL)
    {
      if (comparer->data > compared->data)
        i++;
      compared = compared->next;
    }
    comparer->fpos = i;
    comparer = comparer->next;
  }
}

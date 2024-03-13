
#include "../push_swap.h"

int intcompare(t_list **stA)
{
  t_list *comparer;
  t_list *compared;

  comparer = *stA;
  while (comparer->next != NULL)
  {
    compared = comparer->next;
    while (compared != NULL)
    {
      if (compared->data == comparer->data)
        return (1);
      compared = compared->next;
    }
    comparer = comparer->next;
  }
  return (0);
}

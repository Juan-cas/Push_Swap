
#include "../push_swap.h"

t_list *lstnew(long content)
{
  t_list *big_list;

  big_list = (t_list *)malloc(sizeof(t_list));
  if (!big_list)
    return (NULL);
  big_list->data = content;
  big_list->next = NULL;
  return (big_list);
}

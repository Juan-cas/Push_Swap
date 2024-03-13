
#include "../push_swap.h"

void sort3(t_list **stA)
{
  t_list *fn;
  t_list *sn;

  fn = *stA;
  sn = (*stA)->next;
  if((fn->data > sn->data) && (sn->data > sn->next->data))
  {
    sa(stA, 'p');
    rra(stA, 'p');
  }
  if((fn->data > sn->data) && (sn->data < sn->next->data))
  {
    if(fn->data > sn->next->data)
    {
      ra(stA, 'p');
      return ;
    }
    sa(stA, 'p');
  }
  if ((fn->data < sn->data) && (sn->data > sn->next->data))
  {
    sa(stA, 'p');
    ra(stA, 'p');
  }
}

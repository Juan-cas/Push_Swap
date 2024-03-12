

#include "push_swap.h"

int main(int argc, char **argv)
{
  if (argc < 2)
    return (ft_error(), 1);
  t_list *stackA;
  t_list *stackB;

  stackB = NULL;
  stackA = parser(argv);
  if (!stackA)
    return (1);
  ft_bubble(&stackA);
  
  push_swap(&stackA, &stackB);
  lstclear(&stackA);

  return (0);
}

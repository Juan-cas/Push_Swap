

#include "push_swap.h"

int main(int argc, char **argv)
{
  if (argc < 2)
    return (ft_error(), 1);
  t_list *stackA;
  t_list *stackB;

  stackB = NULL;
  stackA = NULL;
  stackA = cleaner(argv);
  if (!stackA)
    return (1);
  bubblesort(&stackA);
  
  push_swap(&stackA, &stackB);
  lstfree(&stackA);

  return (0);
}

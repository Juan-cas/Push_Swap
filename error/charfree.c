
#include "../push_swap.h"

void charfree(char **matrix)
{
  int i;

  i = -1;
  while (matrix[++i])
  {
    free(matrix[i]);
  }
  free(matrix);
}


#include "../push_swap.h"

t_list *cleaner(char **argv)
{
  char    **matrix;
  char    *str;
  int     i;
  char    *oldptr;
  t_list  *stA;

  i = 0;
  str = ft_calloc(1, 1);
  stA = NULL;
  while (argv[++i])
  {
    oldptr = str;
    str = append(str, argv[i]);
    if (!str)
      return (NULL);
    if (oldptr != NULL)
      free(oldptr);
  }
  if (checker(str))
    return (free(str), NULL);
  matrix = ft_split(str, ' ');
  if (!matrix)
    return (free(str), NULL);
  stA = listcreator(matrix);
  if (!stA)
    return (charfree(matrix), NULL);
  if (intcompare(&stA))
    return (charfree(matrix), lstfree(&stA), NULL);
  return (charfree(matrix), free(str), stA);
}

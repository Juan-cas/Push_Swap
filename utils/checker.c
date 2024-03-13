
#include "../push_swap.h"

int checker(char *str)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while (str[i])
  {
    if ((str[i] == '-' || str[i] == '+') && str[i - 1] == ' '
        && str[i + 1] > '0' && str[i + 1] < '9')
      i++;
    else if (str[i] > '0' && str[i] < '9')
    {
      j = 1;
      i++;
    }
    else if (str[i] == ' ')
      i++;
    else 
      return (1);
  }
  if (j == 1)
    return (0);
  else
    return (1);
}

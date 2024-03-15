
#include "../push_swap.h"

int checker(char *str)
{
  int i;
  int digitFound;
  int length;

  digitFound = 0;
  i = -1;
  length = ft_strlen(str);

  while (str[++i] != '\0')
  {
    if (!ft_isspace(str[i]) && !ft_issign(str[i]) && !ft_isdigit(str[i]))
      return (1); 
    if (ft_issign(str[i]))
    {
      if (i + 1 <= length && !ft_isdigit(str[i + 1]))
        return (1);
      if (i > 0 && str[i - 1] != ' ')
        return (1);
    }
    if (ft_isdigit(str[i]))
      digitFound++;
  }
  if (digitFound > 0)
  {
    return (0);
  }
  return (1);
}
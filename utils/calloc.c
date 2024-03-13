
#include "../push_swap.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*str;

	str = (void *)malloc(number * size);
	if (!str)
		return (NULL);
  ft_bzero(&str, number);
	return (str);
}

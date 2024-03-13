
#include "../push_swap.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*sb;

	i = 0;
	sb = (char *) s;
	while (i < n)
	{
		sb[i] = '\0';
		i++;
	}
}

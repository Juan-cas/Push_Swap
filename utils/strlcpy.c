
#include "../push_swap.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t sizedest)
{
	size_t	i;

	i = 0;
	if (sizedest > 0)
	{
		while (src[i] && i + 1 < sizedest)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

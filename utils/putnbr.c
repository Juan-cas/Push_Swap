
#include "../push_swap.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		write(1, &(char){n % 10 + '0'}, 1);
	}
	else
		write(1, &(char){n + '0'}, 1);
}

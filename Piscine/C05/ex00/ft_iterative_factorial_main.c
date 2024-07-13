#include <stdio.h>

//factorial : n! = n * (n - 1)!

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i > 1)
		nb *= (i-- - 1);
	return (nb);
}

int	main(void)
{
	printf("{%d}\n", ft_iterative_factorial(-4));
	printf("{%d}\n", ft_iterative_factorial(0));
	printf("{%d}\n", ft_iterative_factorial(1));
	printf("{%d}\n", ft_iterative_factorial(4));
	printf("{%d}\n", ft_iterative_factorial(5));
}
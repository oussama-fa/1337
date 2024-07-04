#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power > 1)
	{
		nb *= i;
		power--;
	}
	return (nb);
}

int	main(void)
{
	printf("{%d}\n", ft_iterative_power(2, 0));
	printf("{%d}\n", ft_iterative_power(2, 1));
	printf("{%d}\n", ft_iterative_power(2, -2));
	printf("{%d}\n", ft_iterative_power(2, 3));
}
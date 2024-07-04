#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (nb / i >= i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

int main()
{
    printf("{%d}\n", ft_sqrt(64));
}
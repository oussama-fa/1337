#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    if (power == 0)
        return (1);
    else if (power == 1)
        return (nb);
    else if (power < 0)
        return (0);
    return (ft_recursive_power(nb, power - 1) * nb);
}

int main()
{
    printf("{%d}\n", ft_recursive_power(2, 0));
    printf("{%d}\n", ft_recursive_power(2, 1));
    printf("{%d}\n", ft_recursive_power(2, -2));
    printf("{%d}\n", ft_recursive_power(2, 2));
}
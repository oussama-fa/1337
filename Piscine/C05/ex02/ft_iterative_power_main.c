#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int i;
    int res;

    res = 1;
    i = 0;
    if (power == 0)
        return (1);
    else if (power == 1)
        return (nb);
    else if (power < 0)
        return (0);
    while (power > i)
    {
        res *= nb;
        i++;
    }
    return (res);
}

int main()
{
    printf("{%d}\n", ft_iterative_power(2, 0));
    printf("{%d}\n", ft_iterative_power(2, 1));
    printf("{%d}\n", ft_iterative_power(2, -2));
    printf("{%d}\n", ft_iterative_power(2, 2));
}
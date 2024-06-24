#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    unsigned int i;
    unsigned int res;

    i = 1;
    res = 1;
    if (nb < 0)
        return (0);
    else if (nb == 0)
        return (1);
    while (nb > i && i++)
        res *= i;
    return (res);
}

int main()
{
    printf("{%d}\n", ft_iterative_factorial(-4));
    printf("{%d}\n", ft_iterative_factorial(0));
    printf("{%d}\n", ft_iterative_factorial(1));
    printf("{%d}\n", ft_iterative_factorial(4));
}
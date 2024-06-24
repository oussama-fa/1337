int ft_iterative_factorial(int nb)
{
    int i;
    int res;

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

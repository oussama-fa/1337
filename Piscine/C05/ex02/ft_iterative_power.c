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

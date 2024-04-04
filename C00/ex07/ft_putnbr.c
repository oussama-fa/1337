#include <unistd.h>

void print(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
        write(1, "-2147483648", 11);
    else if (nb < 0)
    {
        print('-');
        nb *= -1;
        ft_putnbr(nb);
    }
    else if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        print(nb % 10 + 48);
    }
    else if (nb <= 9)
    {
        print(nb % 10 + 48);
    }
}

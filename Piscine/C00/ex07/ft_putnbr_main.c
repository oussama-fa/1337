#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb < 0)
    {
    ft_putchar('-');
    ft_putnbr(-(nb / 10));
    ft_putnbr(-(nb % 10));
    }
    else if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else if (nb <= 9)
        ft_putchar(nb % 10 + 48);
}

int main()
{
    ft_putnbr(-2147483648);
    write(1, "\n", 1);
    ft_putnbr(42);
    write(1, "\n", 1);
    ft_putnbr(1);
    write(1, "\n", 1);
    ft_putnbr(-9);
    write(1, "\n", 1);
    ft_putnbr(-42);
}
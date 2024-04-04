#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
    ft_putchar('a');
    ft_putchar('z');
    ft_putchar('A');
    ft_putchar('Z');
    ft_putchar('0');
}
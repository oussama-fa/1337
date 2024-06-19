#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr_non_printable(char *str)
{
    int a;
    int b;
    char Hexa[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

    a = 0;
    b = 0;
    while (*str)
    {
        if ((*str >= 0 && *str <= 31) || *str == 127)
        {
            ft_putchar('\\');

            a = (*str / 16);
            b = (*str % 16);

            ft_putchar(Hexa[a]);
            ft_putchar(Hexa[b]);
        }
        else
            ft_putchar(*str);
        str++;
    }
}

int main()
{
    char    s[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(s);
}
#include <unistd.h>

void ft_print_numbers(void)
{
    char nb;

    nb = 48;
    while (nb <= 57)
    {
        write(1, &nb, 1);
        nb++;
    }
}

int main()
{
    ft_print_numbers();
}
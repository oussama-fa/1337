#include <unistd.h>

void print(char a)
{
    write(1, &a, 1);
}

void ft_print_comb2(void)
{
    int a;
    int b;

    a = 0;
    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            print((a / 10) + 48);
            print((a % 10) + 48);
            print(' ');
            print((b / 10) + 48);
            print((b % 10) + 48);
            if (a != 98)
                write(1, ", ", 2);
            b++;
        }
        a++;
    }
}

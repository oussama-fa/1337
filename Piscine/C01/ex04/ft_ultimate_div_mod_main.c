#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = tmp / *b;
    *b = tmp % *b;
}

int main()
{
    int a;
    int b;

    a = 1337;
    b = 42;
    ft_ultimate_div_mod(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);
}
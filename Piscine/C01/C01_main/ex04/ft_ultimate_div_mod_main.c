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

    a = 13;
    b = 2;
    ft_ultimate_div_mod(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);
}
#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a;
    int b;

    a = 22;
    b = 33;
    printf("After : %d\n", a);
    printf("After : %d\n", b);
    ft_swap(&a, &b);
    printf("Before : %d\n", a);
    printf("Before : %d\n", b);
}
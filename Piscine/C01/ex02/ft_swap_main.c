#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int a;
    int b;

    a = 1337;
    b = 42;
    printf("After : %d\n", a);
    printf("After : %d\n", b);
    ft_swap(&a, &b);
    printf("Before : %d\n", a);
    printf("Before : %d\n", b);
}
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int main()
{
    int a = ft_strlen("Hello World!");
    printf("%d\n", a);
}
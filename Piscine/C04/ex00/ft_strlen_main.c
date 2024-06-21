#include <stdio.h>

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len])
        len++;
    return (len);
}

int main()
{
    printf("%d", ft_strlen("Hello World!\n"));
}
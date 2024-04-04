#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    while (src[i] != '\0' && i < size - 1)
    {
        dest[i] = src[i];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (j);
}

int main()
{
    char src[] = "This is src";
    char d[20];

    printf("%d", ft_strlcpy(d, src, 2));
}
#include <stdio.h>

char    *ft_strncat(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    while (dest[i])
        i++;
    while (src[j] && n > j)
        dest[i++] = src[j++];
    dest[i] = '\0';
    return (dest);
}


int main()
{
    char    dest[] = "Hello";
    char    src[] = " World!";
    printf("%s\n", ft_strncat(dest, src, 4));
}
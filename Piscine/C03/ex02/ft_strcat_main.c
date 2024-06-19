#include <stdio.h>

char    *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i])
        i++;
    while (src[j])
        dest[i++] = src[j++];
    dest[i] = '\0';
    return (dest);
}

int main()
{
    char    dest[] = "Hello";
    char    src[] = " World!";
    printf("%s\n", ft_strcat(dest, src));
}
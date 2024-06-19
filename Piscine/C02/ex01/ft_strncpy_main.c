#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;

    i = 0;
    while (i < n && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    while (i > n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

int main()
{
    char s[] = "Hello World!";
    char d[20];

    printf("{%s}\n", ft_strncpy(d, s, 5));
}
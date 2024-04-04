#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main()
{
    char src[] = "Hello World!";
    char dest[20];

    ft_strcpy(dest, src);
    printf("Src : %s\nDest : %s\n", src, dest);
}
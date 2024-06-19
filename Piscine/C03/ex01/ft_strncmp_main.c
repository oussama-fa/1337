#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    while (*s1 && *s1 == *s2 && n > 0)
    {
        s1++;
        s2++;
        n--;
    }
    if (n == 0)
        return (0);
    return (*s1 - *s2);
}

int main()
{
    char s1[] = "Hello";
    char s2[] = "HellO";
    printf("strncmp:{%d}\n", strncmp(s1, s2, 5));
    printf("ft_strncmp:{%d}", ft_strncmp(s1, s2, 5));
}
#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

int main()
{
    char s1[] = "Hello";
    char s2[] = "HellO";
    printf("strcmp:{%d}\n", strcmp(s1, s2));
    printf("ft_strcmp:{%d}", ft_strcmp(s1, s2));
}
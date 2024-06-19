#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    if (to_find[i] == '\0')
        return (str);
    while (str[i])
    {
        while (str[i + j] && str[i + j] == to_find[j])
            j++;
        if (to_find[j] == '\0')
            return (str + i);
        i++;
        j = 0;
    }
    return (0);
}

int main()
{
    char    s[] = "Hello World";
    char    find[] = "lo";
    printf("%s\n", ft_strstr(s, find));
}
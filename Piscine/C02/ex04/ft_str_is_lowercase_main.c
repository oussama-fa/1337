#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] < 97 || str[i] > 122)
            return (0);
        i++;
    }
    return (1);
}

int main()
{
    printf("%d\n", ft_str_is_lowercase("hello"));
    printf("%d\n", ft_str_is_lowercase("hello!"));
}
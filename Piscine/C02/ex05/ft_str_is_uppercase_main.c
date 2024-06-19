#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] < 65 || str[i] > 90)
            return (0);
        i++;
    }
    return (1);
}

int main()
{
    printf("%d\n", ft_str_is_uppercase("HELLO"));
    printf("%d\n", ft_str_is_uppercase("HELLO!"));
}
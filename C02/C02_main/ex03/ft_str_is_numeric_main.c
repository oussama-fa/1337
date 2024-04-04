#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] < 48 || str[i] > 57)
            return (0);
        i++;
    }
    return (1);
}

int main()
{
    printf("%d\n%d\n", ft_str_is_numeric("010203"), ft_str_is_numeric("01,02,03"));
}
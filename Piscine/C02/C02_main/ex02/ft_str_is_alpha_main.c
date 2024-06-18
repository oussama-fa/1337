#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
            return (0);
        i++;
    }
    return (1);
}

int main()
{
    printf("%d\n%d\n%d\n", ft_str_is_alpha("Hello! How are you?"), ft_str_is_alpha("HelloHowareyou"), ft_str_is_alpha("What's this 4?"));
    return 0;
}
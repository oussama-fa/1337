#include <stdio.h>

char *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
        i++;
    }
    return (str);
}

int main()
{
    char m[] = "Hello world!";
    printf("%s", ft_strupcase(m));
}
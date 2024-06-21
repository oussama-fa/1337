#include <stdio.h>

char    is_w_space(char c)
{
    return (c == 32 || (c >= 0 && c <= 13));
}

int ft_atoi(char *str)
{
    int sig;
    int res;
    int i;

    sig = 1;
    res = 0;
    i = 0;
    while (is_w_space(str[i]))
        i++;
    while (str[i] == '+' || str[i] == '-')
        sig *= 1 - 2 * (str[i++] == '-');
    while (str[i] >= '0' && str[i] <= '9')
        res = res * 10 + (str[i++] -  48);
    return (res * sig);
}

int main()
{
    printf("%d\n", ft_atoi(" ---+--+1234ab567"));
    return 0;
}

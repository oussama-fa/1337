#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i;
    int j;

    i = 0;
    j = 1;
    while (str[i])
    {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
        i++;
    }
    if (str[0] >= 97 && str[0] <= 122)
        str[0] -= 32;
    while (str[j])
    {
        if (!(str[j - 1] >= 48 && str[j - 1] <= 57) &&
            !(str[j - 1] >= 65 && str[j - 1] <= 90) &&
            !(str[j - 1] >= 97 && str[j - 1] <= 122))
            if (str[j] >= 97 && str[j] <= 122)
                str[j] -= 32;
        j++;
    }
    return (str);
}
int main()
{
    char m[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s", ft_strcapitalize(m));
}
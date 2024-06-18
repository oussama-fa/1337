char *ft_strcapitalize(char *str)
{
    int i;
    int j;

    j = 0;
    while (str[j])
    {
        if (str[j] >= 65 && str[j] <= 90)
            str[j] += 32;
        j++;
    }
    if (str[0] >= 97 && str[0] <= 122)
        str[0] -= 32;
    i = 1;
    while (str[i])
    {
        if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z') &&
            !(str[i - 1] >= 'a' && str[i - 1] <= 'z') &&
            !(str[i - 1] >= '0' && str[i - 1] <= '9'))
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
        i++;
    }
    return (str);
}
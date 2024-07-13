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
        if (!(str[i - 1] >= '0' && str[i - 1] <= '9') &&
            !(str[i - 1] >= 65 && str[i - 1] <= 90) &&
            !(str[i - 1] >= 97 && str[i - 1] <= 122))
            if (str[i] >= 97 && str[i] <= 122)
                str[i] -= 32;
        i++;
    }
    return (str);
}
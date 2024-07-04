#include <unistd.h>

int ft_pls(char c)
{
    if (c >= 97 && c <= 122)
        return (c - 97 + 1);
    else if (c >= 65 && c <= 97)
        return (c - 65 + 1);
}

int main(int    ac, char    **av)
{
    int i;
    int rep;

    i = 0;
    rep = 1;
    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] >= 97 && av[1][i] <= 122)
                rep = (av[1][i] - 97 + 1);
            else if (av[1][i] >= 65 && av[1][i] <= 97)
                rep = (av[1][i] - 65 + 1);
            else
                rep = 1;
            while (rep > 0)
            {
                write(1, &av[1][i], 1);
                rep--;
            }
            i++;
        }
        
    }
    write(1, "\n", 1);
}
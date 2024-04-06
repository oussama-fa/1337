#include <unistd.h>

int main()
{
    char U;
    char l;

    U = 'Z';
    l = 'z';
    while (U >= 'A' && l >= 'a')
    {
        if (l % 2 == 0)
            write(1, &l, 1);
        else if (U % 2 == 1)
            write(1, &U, 1);
        l--;
        U--;
    }
    write(1, "\n", 1);
}
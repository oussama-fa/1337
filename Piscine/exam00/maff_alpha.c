#include <unistd.h>

int main()
{
    char U;
    char l;

    U = 'A';
    l = 'a';
    while (U <= 'Z' && l <= 'z')
    {
        if (l % 2 == 1)
            write(1, &l, 1);
        else if (U % 2 == 0)
            write(1, &U, 1);
        l++;
        U++;
    }
    write(1, "\n", 1);
}
#include <unistd.h>

int main()
{
    char nb;

    nb = '9';
    while (nb >= 48)
    {
        write(1, &nb, 1);
        nb--;
    }
    write(1, "\n", 1);
}
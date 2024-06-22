#include <unistd.h>

int main(int Argv, char **Argc)
{
    if (Argv == 1)
        write(1, "a", 1);
    else
    {
        while (*Argc[1])
        {
            if (*Argc[1]++ == 'a')
            {
                write(1, "a", 1);
                break;
            }
        }
    }
    write(1, "\n", 1);
}
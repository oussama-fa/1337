#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int tmp;

    i = 0;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (tab[i] > tab[j])
            {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
            j++;
        }
        i++;
    }
}

int main()
{
    int arr[] = {0, 1337, 42, -42};
    ft_sort_int_tab(arr, 4);
    for (int i = 0; i < 4; i++)
        printf("{%d}", arr[i]);
}
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int fi;
    int li;
    int tmp;

    fi = 0;
    li = size - 1;
    while (fi < li)
    {
        tmp = tab[fi];
        tab[fi] = tab[li];
        tab[li] = tmp;
        fi++;
        li--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    ft_rev_int_tab(arr, 4);
    for (int i=0; i < 4; i++)
        printf("{%d}", arr[i]);
}
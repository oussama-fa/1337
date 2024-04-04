#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int fi;
    int li;
    int emp;

    fi = 0;
    li = size - 1;
    while (fi < li)
    {
        emp = tab[fi];
        tab[fi] = tab[li];
        tab[li] = emp;
        fi++;
        li--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4};

    int i;

    i = 0;
    ft_rev_int_tab(arr, 4);
    while (i < 4)
    {
        printf("%d", arr[i]);
        i++;
    }
}
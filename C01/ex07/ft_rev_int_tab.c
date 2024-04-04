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

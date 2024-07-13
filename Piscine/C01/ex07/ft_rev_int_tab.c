void	ft_rev_int_tab(int *tab, int size)
{
	int	fi;
	int	li;
	int	tmp;

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

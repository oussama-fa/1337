int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i > 1)
		nb *= (i-- - 1);
	return (nb);
}

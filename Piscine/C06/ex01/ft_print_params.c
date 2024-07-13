#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac > 1)
	{
		while (ac > i)
		{
			ft_putstr(av[i]);
			i++;
			write(1, "\n", 1);
		}
	}
}
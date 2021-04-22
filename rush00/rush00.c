
void	ft_putchar(char c);

void	f1(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
	ft_putchar('\n');
}

void	f2(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			ft_putchar('|');
		else
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	rush00(int x, int y)
{
	int	j;

	j = 0;
	while (j < y)
	{
		if (j == 0 || j == y - 1)
			f1(x);
		else
			f2(x);
		j++;
	}
}

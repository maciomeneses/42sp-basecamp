void	ft_putchar(char c);

void	print_line(int x, char left, char middle, char right)
{
	if (x >= 1)
	{
		ft_putchar(left);
		x--;
		while (x >= 2)
		{
			ft_putchar(middle);
			x--;
		}		
		if (x == 1)
			ft_putchar(right);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (i == 0 || i == y - 1)
		{
			print_line(x, 'A', 'B', 'C');
		}
		else
		{
			print_line(x, 'B', ' ', 'B');
		}
		i++;
	}
}

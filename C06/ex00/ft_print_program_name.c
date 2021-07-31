#include	<unistd.h>

void	ft_putstr(char *str);

int	main(int argc, char *argv[])
{
	if (argc < 1)
		return (0);
	ft_putstr(argv[0]);
	write(1, "\n", 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, &*str, 1);
		str++;
	}
}

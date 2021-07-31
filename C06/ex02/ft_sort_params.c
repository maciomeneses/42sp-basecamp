#include	<unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);
void	sort_strings_array(int size, char *str_array[]);

int	main(int argc, char *argv[])
{
	if (argc < 1)
		return (0);
	argv++;
	sort_strings_array(argc - 1, argv);
	while (*argv != '\0')
	{
		ft_putstr(*argv);
		write(1, "\n", 1);
		argv++;
	}
}

void	sort_strings_array(int size, char *str_array[])
{
	int		i;
	int		j;
	int		diff;
	char	*swap;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			diff = ft_strcmp(str_array[j], str_array[j + 1]);
			if (diff > 0)
			{
				swap = str_array[j + 1];
				str_array[j + 1] = str_array[j];
				str_array[j] = swap;
			}
			j++;
		}
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	diff;

	while (*s1 != '\0' && *s2 != '\0')
	{
		diff = (unsigned char)(*s1) - (unsigned char)(*s2);
		if (diff != 0)
			return (diff);
		s1++;
		s2++;
	}
	diff = (unsigned char)(*s1) - (unsigned char)(*s2);
	return (diff);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, &*str, 1);
		str++;
	}
}

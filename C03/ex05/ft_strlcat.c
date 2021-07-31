unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	aux_size;
	int				to_copy;

	aux_size = 0;
	while (*dest != '\0' && aux_size < size)
	{
		++dest;
		++aux_size;
	}
	to_copy = aux_size < size;
	while (*src != '\0' && aux_size < size)
	{
		*dest++ = *src++;
		aux_size++;
	}
	if (aux_size == size)
		dest--;
	if (to_copy)
		*dest = '\0';
	while (*src != '\0')
	{
		++src;
		++aux_size;
	}
	return (aux_size);
}

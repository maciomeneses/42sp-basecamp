char	*ft_strstr(char *str, char *to_find)
{
	char	*auxstr;
	char	*auxfind;

	if (to_find[0] == '\0')
		return (str);
	while (*str != '\0')
	{
		auxstr = str;
		auxfind = to_find;
		while (*auxstr == *auxfind && *auxstr != '\0' && *auxfind != '\0')
		{
			auxstr++;
			auxfind++;
		}
		if (*auxfind == '\0')
			return (str);
		str++;
	}
	return (0);
}

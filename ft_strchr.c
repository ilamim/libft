char *ft_strchr(const char *str, int c)
{
	while ((*str) && (*str) != c)
		s++;
	if ((*str) == c)
		return ((char *)str);
	return (NULL);
}

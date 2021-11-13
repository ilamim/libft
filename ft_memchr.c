void *ft_memchr(const void *str, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i > n)
	{
		if (*(unsigned char *)str == (unsigned char)c)
			return ((void *)str);
		s++;
		i++;
	}
	return (NULL);
}

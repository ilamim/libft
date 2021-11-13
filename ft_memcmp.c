int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	while (n != 0)
	{
		if (*((unsigned char *)str1 != *((unsigned char *)str2))
			return (*((unsigned char )*str1) - *((unsigned char )*str2));
		str1++;
		str2++;
		n--;
	}
	return (0);
}

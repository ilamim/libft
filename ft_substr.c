char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *res;
	unsignzed int i;

	res = (malloc(sizeof(char) * len);
	i = 0;
	if (!s || !res)
		return (NULL);
	if (start < ft_strlen(s))
	{ 
		while (s[start + i] && i < len)
		{
			res[i] = s[start + i];
			i++;
		}
	}
	res[i] = '\0';
	return (res);
}


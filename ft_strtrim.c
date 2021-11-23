char *ft_strtrim(char const *s1, char const *set)
{
	char *res;
	size_t len;

	len = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	while (len && ft_strchr(set, s1[len]))
		len--;
	res = ft_substr((char *)s1, 0, len + 1);
	return (res);
}
	

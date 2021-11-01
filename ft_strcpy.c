char	*ft_strcpy(char *des, const char *src)
{
	int i;
	i = 0;
	while (src[i])
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
	return (des);
}

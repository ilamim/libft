char    *ft_strcpy(char *des, const char *src)
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

int wordcount(char *str, char c)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			words++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
		while (str[i] == c)
			i++;
	}
	return (words);
}

//char **ft_split(char *str, char c)
//{
//	char **res;
//	int i;
//	int words;

//	words = wordcount(str, c);

int main()
{
	printf("%d\n", wordcount("", ' '));
	return 0;
}
	




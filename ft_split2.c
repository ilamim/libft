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

#include <stdlib.h>

char*	ft_allocWord(char* str, char c)
{
	(void)str;
	(void)delimiter;
	//aloue et copie le mot et le retourne
	return (NULL);
}

char**	ft_freetab(char **tab)
{
	// loop de free de tableau
	return (NULL);
}


char **ft_split(char *str, char c)
{
	char **tab;
	int i;
	int words;
	int iword;

	if (!str)
		return (NULL);
	words = wordcount(str, c);
	tab = (char**)malloc(sizeof(char*) * (words + 1));
	i = 0;
	iword = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			tab[iword] = ft_allocWord(str + i, c);
			if (tab[iword] == NULL)
				return (ft_freetab(tab));
			iword++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (tab);
}

int main()
{
	printf("%d\n", wordcount("", ' '));
	return 0;
}
	




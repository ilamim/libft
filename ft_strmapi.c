#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *res;
	unsigned int i;
	unsigned int len;

	len = ft_strlen(s) + 1;
	res = malloc(sizeof(char) * len);
	i = 0;
	if (!s || !res)
		return (NULL);
	while (s[i] != 0)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}


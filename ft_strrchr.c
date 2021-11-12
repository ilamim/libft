#include <stdio.h>

size_t ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strrchr(const char *str, int c)
{
	int i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == c)
			return (char *)&str[i];
		i--;
	}
	return (0);
}

int main()
{
	const char str[] = "bom dia disgraça";  
	char *p, *p2;

	p = ft_strrchr(str, 'd'); 
	printf("string from last occurrence of 'd': %s\n", p);
	p2 = ft_strrchr(str, 'i'); 
	printf("string from last occurrence of 'i': %s\n", p2);
	return 0;
}

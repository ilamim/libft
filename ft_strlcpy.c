#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *s);

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;

	i = 0;
	
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest));
}

size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return(i);
}

int main()
{
	char dest[0];

	strlcpy(dest, "tototototototo", 0);
	printf("%s\n", dest);
	ft_strlcpy(dest, "tototototototo", 0);
	return 0;
}

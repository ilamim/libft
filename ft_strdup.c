#include <stdlib.h>
#include <stdio.h>

size_t ft_strlen(char *str)
{
	size_t len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char *ft_strdup(char *str)
{
	size_t len;
	char *dup;
	char *copy;

	len = ft_strlen(str);
	dup = (char *)malloc(sizeof(char) *len + 1);
	if (dup == NULL)
		return((char *)NULL);
	copy = dup;
	while(*str)
	{
		*copy = *str;
		copy++;
		str++;
	}
	*copy = '\0';
	return (dup);
}

int main()
{
	char str[] = "whateverrr\n";
	char *copy;
	size_t len;
	size_t copylen;

	copy = ft_strdup(str);
	len = ft_strlen(str);
	copylen = ft_strlen(copy);

	printf("ORIGINAL: %s\nORIGINAL LENGTH: %ld\n", str, len);
	printf("COPY: %s\nCOPY LENGTH: %ld\n", copy, copylen);
	return(0);
}

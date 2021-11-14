#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *str, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)str == (unsigned char)c)
			return ((void *)str);
		str++;
		i++;
	}
	return (NULL);
}

int main()
{
	const char str[] = "eu quero ser proxeneta";
	char c;
	char *res;
	char *res2;

	c = 's';
	res = ft_memchr(str, c, 17);
	res2 = memchr(str, c, 17);
	printf("after %c = %s\n", c, res);
	printf("original function = %s\n", res2);
	return 0;
}


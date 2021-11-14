#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	while (n != 0)
	{
		if (*((unsigned char *)str1) != *((unsigned char *)str2))
			return (*((unsigned char *)str1) - *((unsigned char *)str2));
		str1++;
		str2++;
		n--;
	}
	return (0);
}

int main()
{
        char str1[] = "ABcD";
	char str2[] = "ABCD";
	int res1;
	int res2;

	res1 = memcmp(str1, str2, 4);
	res2 = ft_memcmp(str1, str2, 4);
	printf("%d\n", res1);
	printf("%d\n", res2);
	return 0;
}

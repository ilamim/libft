#include <stdio.h>
#include <string.h>

size_t  ft_strlen(const char *str)
{
	size_t  i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t str2_len;

	str2_len = ft_strlen(str2);
	
	if (str2_len == 0)
		return ((char *)str1);
	while (*str1 != '\0' && len > 0)
	{
		if (*str1 != *str2)
		{
			str1++;
			len--;
		}
		while (*str1 == *str2 && len > 0)
		{
			str1++;
			str2++;
			len--;
			if (*str2 == '\0')
				return ((char *)(str1 - str2_len));
		}

	}
	return (NULL);
}

int main() 
{
	const char haystack[] = "eu falei farao-o-o-o";
	const char needle[] = "farao";
	char *ret;
	char *ret2;
	size_t len;
	size_t len2;
	
	len = 30;
	len2 = 8;
	ret = ft_strnstr(haystack, needle, len);
	ret2 = ft_strnstr(haystack, needle, len2);
	printf("The substring is: %s\n", ret);
	printf("The substring is %s\n", ret2);
	return(0);
}

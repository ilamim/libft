#include "libft.h"

char *ft_strcat(char *str1, const char *str2)
{
	int len;
	len = ft_strlen(str1);
	if (*str2 == '\0')
		return (str1);
	while (*str2)
	{
		str1[len] = *str2++;
		len++;
	}
	str1[len] = '\0';
	return (str1);
}

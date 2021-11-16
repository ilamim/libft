#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int	len;
	
	len = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(sizeof(char) * (len + 1));
	if (!s1 || !s2 || !res)
		return (NULL);
	else
	{
		ft_memcpy(res, s1, ft_strlen(s2));
		ft_memcpy(res + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	}
	return (res);
}

int main()
{
	char *dest;

	dest = ft_strjoin("toiueieoioiest", "torijzirlkherkhleztotototo");
	printf("%s\n", dest);
	return 0;
}





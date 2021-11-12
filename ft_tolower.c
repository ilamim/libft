#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

int main() 
{
	char c;

	c = '+';
	printf("%c -> %c", c, ft_tolower(c));

	c = '@';
	printf("\n%c -> %c", c, ft_tolower(c));

	c = 102;
	printf("\n%c -> %c", c, ft_tolower(c));
	return 0;
}

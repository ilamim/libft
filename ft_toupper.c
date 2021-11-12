#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

int main() 
{
	char c;

	c = 'H';
	printf("%c -> %c", c, ft_toupper(c));

	c = 'y';
	printf("\n%c -> %c", c, ft_toupper(c));

	c = 102;
	printf("\n%c -> %c", c, ft_toupper(c));
	return 0;
}

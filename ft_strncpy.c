
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int stop;

	stop = 0;
	while(*src != '\0' && stop < n)
	{
		*dest = *src;
		dest++;
		src++;
		stop++;
	}
	*dest = '\0';
	return (dest);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main()
{
	unsigned int n;
	char a[] = "wtvr frvr";
	char b[] = "lalala lola";

	n = 3;
	ft_strncpy(a, b, n);
	ft_putstr(a);
}       

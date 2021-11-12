#include <stddef.h>

void *ft_memcpy(void *dest, void *src, size_t n)
{
	unsigned char *cdest;
	unsigned char *csrc;

	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	if (n == 0 || dst == src)
		return (dest);
	while (n != 0)
	{
		*(cdest++) = *(csrc++);
		n--;
	}
	return (dest);
}

int main()
{
	char dest[30];
	
	ft_memcpy(dest, "totototototo", 12);
	printf("%s", dest);
	return 0;
}	

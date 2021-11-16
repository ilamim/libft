#include <stddef.h>
#include <stdio.h>

void *ft_memcpy(void *dest, void *src, size_t n)
{
	unsigned char *cdest;
	unsigned char *csrc;

	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	if (n == 0 || dest == src)
		return (dest);
	while (n != 0)
	{
		*(cdest++) = *(csrc++);
		n--;
	}
	return (dest);
}	

#include "libft.h"

void *ft_memmove(void *dest, void *src, size_t n)
{
	unsigned char *cdest;
	unsigned char *csrc;

	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;

	if (src < dest)
	{
		while (n != 0)
		{
			cdest[n - 1] = csrc[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}


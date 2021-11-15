#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	int len;

	len = ft_strlen(str);
	if (len > 0)
		write(fd, str, len);
	write(fd, "\n", 1);
}

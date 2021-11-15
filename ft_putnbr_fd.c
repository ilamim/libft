void ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		write(fd, '-', 1);
		n = -n;
	} 
	if (n > 9)
	{
		ft_putnbr_fd((a / 10), fd);
		ft_putnbr_fd((a % 10), fd);
	}
	else	
		ft_putchar_fd((n + '0'), fd);	
}

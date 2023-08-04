void	ft_putnbr(int nb)
{
	char	number[10];
	int	i;

	i = 0;
	if (nb == 0)
		write(1, "0", 1);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	while (nb > 0)
	{
		number[i] = (nb % 10) + 48;
		nb /= 10;
		i++;
	}
	while (i > 0)
	{
		write(1, &number[i - 1], 1);
		i--;
	}
}

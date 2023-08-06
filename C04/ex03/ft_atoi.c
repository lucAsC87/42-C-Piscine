int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	number;	

	i = 0;
	minus = 0;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 13)  || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			minus++;
		i++;
	}
	while  (str[i] >= 48 && str[i] <= 57)
	{
		number *= 10;
		number += str[i] - 48;
		i++;
	}
	if (minus % 2 != 0)
		number *= -1;
	return number;
}

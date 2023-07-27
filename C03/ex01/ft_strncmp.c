int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	j;
	int	sum_s1;
	int	sum_s2;

	i = 0;
	j = 0;
	sum_s1 = 0;
	sum_s2 = 0;
	while (s1[i] < n)
	{
		sum_s1+=s1[i];
		i++;
	}
	while (s2[j] < n)
	{
		sum_s2+=s2[j];
		j++;
	}
	if (sum_s1 == sum_s2)
		return (0);
	else if (sum_s1 < sum_s2)
		return (-1);
	else 
		return (1);
}

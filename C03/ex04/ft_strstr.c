char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0' && str[i] != to_find[j])
	{
		i++;
		if (str[i] == to_find[j])
		{
			while (to_find[j] != '\0' && to_find[j] == str[i])
			{
				j++;
				i++;
			}
			str[i] = '\0';
			return str;	
		}
	}
	return (1);
}

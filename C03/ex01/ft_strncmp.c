int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s[i] != '\0') && (n > 0))
	{
		i++;
		n--;
	}
	return s1[i] - s2[i];
}

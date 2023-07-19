void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	k;
	int	newTab[size];

	i = 0;
	j = size - 1;
	while (i < size)
	{
		newTab[i] = tab[j];
		i++;
		j--;
	}

	k = 0;
	while (k < size)
	{
		tab[k] = newTab[k];
		k++;
	}
}

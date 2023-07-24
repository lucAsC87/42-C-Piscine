#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	min;
	int	max;

	i = 0;
	min = tab[i];
	max = tab[size - 1];
	while (i < size)
	{
		if (tab[i] < min)
			min = tab[i];
		if (tab[i] > max)
			max = tab[i];
		i++;
	}

	printf("MIN: %i MAX: %i\n", min, max);
}

int	main(void)
{
	int test[] = {44, 22, 33, 11};
	ft_sort_int_tab(test, 4);
}

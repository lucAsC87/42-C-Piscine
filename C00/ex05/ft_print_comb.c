#include <unistd.h>

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	x;

	i = 48;
	j = 49;
	x = 50;
	while (i <= 55)
	{
		while (j <= 56)
		{
			while (x <= 57)
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &x, 1);
				if (i < 55)
				{
					write(1, ", ", 2);
				}
				x++;
			}
			j++;
			x = j+1;	
		}
		i++;
		j = i+1;
		x = j+1;
	}
}

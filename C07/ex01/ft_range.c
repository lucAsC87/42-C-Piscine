#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	length;
	int	*range;
	
	i = 0;
	length = max - min;
	if (min >= max)
		return (NULL);
	if (length < 0)
		length *= -1;
	range = (int *)malloc(length * sizeof(int));
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	
	return (range);
}

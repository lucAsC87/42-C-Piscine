#include <unistd.h>
#include <stdio.h>

void	write_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) & (s1[i] != '\0'))
		i++;
	
	return (s1[i] - s2[i]); 
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
		return (1);
	else if (argc == 2)
		write_str(argv[1]);
	else 
	{
		int	i;
		int	j;
		int	compare;

		i = 1;
		while (i < argc)
		{
			j = i + 1;
			while (j < argc)
			{
				compare = ft_strcmp(argv[i], argv[j]);
				if (compare < 0 || compare == 0)
					write_str(argv[i]);
				else
					write_str(argv[j]);
				j++;
			}
			i++;
		}	
	}
}

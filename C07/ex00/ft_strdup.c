#include <stdlib.h>

int	str_len(char *str);
char	*ft_strcpy(char *dest, char *src);

char	*ft_strdup(char *src)
{
	char	*dest;
	int	length;

	length = str_len(src);
	dest = (char *)malloc((length + 1) * sizeof(char));
	ft_strcpy(dest, src);
	return dest;
}

int     str_len(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
                i++;
        return i;
}

char    *ft_strcpy(char *dest, char *src)
{
        int     i;

        i = 0;
        while (src[i] != '\0')
        {
                dest[i] = src[i];
                i++;
        }
        dest[i] = '\0';

        return (dest);
}

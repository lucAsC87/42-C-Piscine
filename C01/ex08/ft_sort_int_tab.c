#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size)
{
    int    i;
    int    new_tab[size];

    i = 0;
    while (i < size)
    {
        new_tab[i] = tab[i];
        
        if (tab[i] < new_tab[0])
        {
		new_tab[i] = new_tab[0];
		new_tab[0] = tab[i];
		if (new_tab[i] < new_tab[i - 1])
		{
			new_tab[i] = new_tab[i - 1];
			new_tab[i - 1] = tab[i];
		}
        }
        i++;
    }
	
    for (int i = 0; i < size; i++)
    {
    	printf("%i ", new_tab[i]);
    }
    printf("\n");
}

int     main(void)
{
        int test[] = {44, 22, 33, 11};
        ft_sort_int_tab(test, 4);
}

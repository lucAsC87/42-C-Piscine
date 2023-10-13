/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucavall <lucavall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:18:33 by lucavall          #+#    #+#             */
/*   Updated: 2023/09/12 14:44:45 by lucavall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				ft_swap(&tab[i], &tab[j]);
			}
			else
			{
				j++;
			}
		}
		i++;
		j = i + 1;
	}
}

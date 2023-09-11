/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucavall <lucavall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:18:14 by lucavall          #+#    #+#             */
/*   Updated: 2023/09/11 11:18:17 by lucavall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

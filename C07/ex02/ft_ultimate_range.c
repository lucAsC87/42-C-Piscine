/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucavall <lucavall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:25:44 by lucavall          #+#    #+#             */
/*   Updated: 2023/09/11 11:25:47 by lucavall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	length;
	int	*copy;
	
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	length = max - min;
	copy = (int *)malloc(length * sizeof(int));
	if (copy == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = copy;
	while (min < max)
	{
		copy[i] = min;
		min++;
		i++;
	}

	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucavall <lucavall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:25:17 by lucavall          #+#    #+#             */
/*   Updated: 2023/09/11 11:25:20 by lucavall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	range = (int *)malloc(length * sizeof(int));
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	
	return (range);
}

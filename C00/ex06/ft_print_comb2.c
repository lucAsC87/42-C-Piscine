/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucavall <lucavall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:54:43 by lucavall          #+#    #+#             */
/*   Updated: 2023/09/12 14:12:44 by lucavall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	k;
	int	x;

	i = 48;
	j = 48;
	k = 48;
	x = 49;
	while (i <= 57)
	{
		while (j <= 57)
		{
			while (k <= 57)
			{
				while (x <= 57)
				{
					write(1, &i, 1);
					write(1, &j, 1);
					write(1, " ", 1);
					write(1, &k, 1);
					write(1, &x, 1);
					x++;
					if (i < 57 || j < 56)
						write(1, ", ", 2);
				}
				k++;
				if (x > 57)
					x = 48;
			}
			j++;
			if (k > 57)
			{
				k = i;
				x = j + 1;
			}
		}
		i++;
		if (j > 56)
		{
			j = 48;
			k = i;
			x = j + 1;
		}
	}
}

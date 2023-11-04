/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucavall <lucavall@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:22:30 by lucavall          #+#    #+#             */
/*   Updated: 2023/11/04 15:04:33 by lucavall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char		number[10];
	int			i;
	long int	num;

	i = 0;
	num = nb;
	if (num == 0)
		write(1, "0", 1);
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	while (num > 0)
	{
		number[i] = (num % 10) + 48;
		num /= 10;
		i++;
	}
	while (i > 0)
	{
		write(1, &number[i - 1], 1);
		i--;
	}
}

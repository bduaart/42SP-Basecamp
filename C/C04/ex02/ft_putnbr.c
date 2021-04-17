/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brduarte <brduarte@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:09:40 by brduarte          #+#    #+#             */
/*   Updated: 2021/04/16 19:31:45 by brduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long int	a;
	char		b[10];
	int			index;

	a = nb;
	if (a < 0)
	{
		write(1, "-", 1);
		a *= -1;
	}
	index = 0;
	while (a > 0 || index == 0)
	{
		b[index] = a % 10 + 48;
		a = a / 10;
		index++;
	}
	while (index-- > 0)
	{
		write(1, &b[index], 1);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brduarte <brduarte@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 20:17:20 by brduarte          #+#    #+#             */
/*   Updated: 2021/04/08 00:11:52 by brduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;
	char	res[3];

	a = -1;
	while (a++ < 9)
	{
		b = a;
		while (b++ < 9)
		{
			c = b;
			while (c++ < 9)
			{
				res[0] = a + '0';
				res[1] = b + '0';
				res[2] = c + '0';
				write(1, res, 3);
				if (a < 7)
				{
					write(1, ", ", 2);
				}
			}
		}
	}
}

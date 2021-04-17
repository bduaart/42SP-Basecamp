/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-lim <gade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 23:31:40 by brduarte          #+#    #+#             */
/*   Updated: 2021/04/05 01:36:11 by gade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_mid_columns(int irow, int y)
{
	if (irow == 1 || irow == y)
		ft_putchar('B');
	if (irow > 1 && irow < y)
		ft_putchar(' ');
}

void	print_tip_columns(int irow, int icol, int x, int y)
{
	if ((irow == 1 && icol == 1) || (irow == y && icol == 1))
		ft_putchar('A');
	else if ((irow == 1 && icol == x) || (irow == y && icol == x))
		ft_putchar('C');
	if (irow > 1 && irow < y)
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int icol;
	int irow;

	icol = 0;
	irow = 0;
	if (x <= 0 || y <= 0)
		return ;
	else
	{
		while (++irow <= y)
		{
			while (++icol <= x)
			{
				if (icol < x && icol > 1)
					print_mid_columns(irow, y);
				if (icol == x || icol == 1)
					print_tip_columns(irow, icol, x, y);
			}
			icol = 0;
			ft_putchar('\n');
		}
	}
}

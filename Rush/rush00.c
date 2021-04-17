/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-lim <gade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 17:23:20 by gade-lim          #+#    #+#             */
/*   Updated: 2021/04/05 01:34:22 by gade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_mid_columns(int irow, int y)
{
	if (irow > 1 && irow < y)
		ft_putchar(' ');
	if (irow == 1 || irow == y)
		ft_putchar('-');
}

void	print_tip_columns(int irow, int y)
{
	if (irow == 1 || irow == y)
		ft_putchar('o');
	if (irow > 1 && irow < y)
		ft_putchar('|');
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
					print_tip_columns(irow, y);
			}
			icol = 0;
			ft_putchar('\n');
		}
	}
}

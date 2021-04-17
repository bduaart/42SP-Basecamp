/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-lim <gade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 00:35:10 by brduarte          #+#    #+#             */
/*   Updated: 2021/04/05 01:36:14 by gade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_square(int x, int y, int col, int row)
{
	if (row == 1)
		if (col == 1)
			ft_putchar('A');
		else if (col == x)
			ft_putchar('C');
		else
			ft_putchar('B');
	else if (row == y)
		if (col == 1)
			ft_putchar('C');
		else if (col == x)
			ft_putchar('A');
		else
			ft_putchar('B');
	else
	{
		if (col == 1 || col == x)
			ft_putchar('B');
		else if (col > 1 && col < x)
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	col;
	int	row;

	col = 0;
	row = 0;
	if (x <= 0 || y <= 0)
		return ;
	else
	{
		while (++row <= y)
		{
			while (++col <= x)
			{
				print_square(x, y, col, row);
			}
			col = 0;
			ft_putchar('\n');
		}
	}
}

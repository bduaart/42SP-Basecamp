/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brduarte <brduarte@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 20:23:02 by brduarte          #+#    #+#             */
/*   Updated: 2021/04/08 05:06:02 by brduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		index;
	int		index_b;
	int		tmp;

	index = 0;
	index_b = 0;
	size--;
	while (index <= size)
	{
		while (index_b < size)
		{
			if (tab[index_b] > tab[index_b + 1])
			{
				tmp = tab[index_b];
				tab[index_b] = tab[index_b + 1];
				tab[index_b + 1] = tmp;
			}
			index_b++;
		}
		index_b = 0;
		index++;
	}
}

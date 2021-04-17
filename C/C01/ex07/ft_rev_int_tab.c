/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brduarte <brduarte@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 19:36:19 by brduarte          #+#    #+#             */
/*   Updated: 2021/04/07 14:50:13 by brduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int index_b;
	int res;

	index = 0;
	index_b = 0;
	size--;
	while (index < size)
	{
		res = tab[index];
		tab[index] = tab[size];
		tab[size] = res;
		size--;
		index++;
	}
}

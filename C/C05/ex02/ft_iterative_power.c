/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brduarte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 20:38:50 by brduarte          #+#    #+#             */
/*   Updated: 2021/04/16 23:31:41 by brduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int	a;

	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	while (power > 1)
	{
		a *= nb;
		power--;
	}
	return (a);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brduarte <brduarte@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 19:45:25 by brduarte          #+#    #+#             */
/*   Updated: 2021/04/08 00:07:05 by brduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char a;
z
	a = '0';
	while (a <= '9')
	{
		write(1, &a, 1);
		a++;
	}
}
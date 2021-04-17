/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brduarte <brduarte@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:14:05 by brduarte          #+#    #+#             */
/*   Updated: 2021/04/14 18:57:05 by brduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int		index;

	index = 0;
	while (str[index])
	{
		if (!(str[index] >= 32 && str[index] <= 126))
			return (0);
		index++;
	}
	return (1);
}

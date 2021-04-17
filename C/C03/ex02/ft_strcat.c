/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brduarte <brduarte@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:34:38 by brduarte          #+#    #+#             */
/*   Updated: 2021/04/16 03:59:39 by brduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	src_index;
	int	dest_index;
	int	dest_len;

	src_index = 0;
	dest_index = 0;
	while (dest[dest_index] != '\0')
	{
		dest_index++;
	}
	dest_len = dest_index;
	while (src[src_index] != '\0')
	{
		dest[dest_len] = src[src_index];
		src_index++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}

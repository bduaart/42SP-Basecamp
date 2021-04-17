/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brduarte <brduarte@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:21:34 by brduarte          #+#    #+#             */
/*   Updated: 2021/04/16 04:01:08 by brduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	src_index;
	unsigned int	destlen;
	unsigned int	dest_src;
	unsigned int	index;

	src_index = 0;
	dest_src = 0;
	index = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	destlen = index;
	if (dest[index] == '\0')
	{
		while (src_index < nb && src[src_index] != '\0')
		{
			dest[destlen] = src[src_index];
			src_index++;
			destlen++;
		}
		dest[destlen] = '\0';
	}
	return (dest);
}

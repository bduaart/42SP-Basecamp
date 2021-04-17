/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brduarte <brduarte@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:39:23 by brduarte          #+#    #+#             */
/*   Updated: 2021/04/16 13:10:45 by brduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		index;
	int		jindex;

	if (*to_find == 0)
		return (str);
	index = 0;
	while (str[index] != '\0')
	{
		jindex = index;
		while (to_find[jindex - index] == str[jindex])
		{
			if (to_find[++jindex - index] == '\0')
				return (str + index);
		}
		index++;
	}
	return (0);
}

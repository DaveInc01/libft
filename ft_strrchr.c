/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmkhitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:49:26 by dmkhitar          #+#    #+#             */
/*   Updated: 2022/03/28 21:17:51 by dmkhitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t	i;
	size_t	size;
	int		j;

	i = 0;
	j = -1;
	size = ft_strlen(str);
	if (ch > 127)
		return ((char *)str);
	if (str)
	{
		if (ch == '\0')
			return ((char *)str + size);
		while (str[i] != '\0')
		{
			if (str[i] == ch)
				j = i;
			i++;
		}
		if (j != -1)
			return ((char *)(str + j));
	}
	return (NULL);
}

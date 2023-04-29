/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmkhitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 00:22:51 by dmkhitar          #+#    #+#             */
/*   Updated: 2022/03/28 21:16:48 by dmkhitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(s);
	i = 0;
	if (c > 127)
		return ((char *)s);
	if (s)
	{
		if (c == '\0')
			return ((char *)s + size);
		while (s[i])
		{
			if (s[i] == c)
				return ((char *)(s + i));
			i++;
		}
	}
	return (NULL);
}

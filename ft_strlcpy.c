/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmkhitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:40:42 by dmkhitar          #+#    #+#             */
/*   Updated: 2022/04/13 20:41:35 by dmkhitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char	*strsrc;
	char		*strdst;
	size_t		i;

	i = 0;
	strsrc = src;
	strdst = dst;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < dstsize - 1 && strsrc[i])
	{
		strdst[i] = strsrc[i];
		i++;
	}
	strdst[i] = '\0';
	return (ft_strlen(src));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmkhitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:03:14 by dmkhitar          #+#    #+#             */
/*   Updated: 2022/03/15 23:13:47 by dmkhitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*strdst;
	const char	*strsrc;

	strdst = dst;
	strsrc = src;
	i = 0;
	while (i < n)
	{
		strdst[i] = strsrc[i];
		i++;
	}
	return (strdst);
}

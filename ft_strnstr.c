/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srnstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmkhitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 22:19:54 by dmkhitar          #+#    #+#             */
/*   Updated: 2022/03/20 01:39:39 by dmkhitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

int		ft_strncmp(const char *str1, const char *str2, size_t n);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	str;

	str = ft_strlen(needle);
	if (!*needle)
		return ((char *)(haystack));
	while (len)
	{
		if (!*haystack || str > len--)
			return (0);
		if (!ft_strncmp(haystack, needle, str))
			return ((char *)(haystack));
		haystack++;
	}
	return (0);
}

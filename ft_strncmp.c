/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmkhitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 21:57:23 by dmkhitar          #+#    #+#             */
/*   Updated: 2022/03/20 01:34:45 by dmkhitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

size_t	ft_strlen(const char *s);

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	same;
	size_t	str1size;
	size_t	str2size;

	str1size = ft_strlen(str1);
	str2size = ft_strlen(str2);
	i = 0;
	same = 0;
	while (i < n && str1[i] != '\0')
	{
		if (str1[i] == str2[i])
		{
			same++;
			i++;
		}
		else
			return (str1[same] - str2[same]);
	}	
	if ((same == n) || (str1size == same && str2size == str1size))
		return (0);
	return (str1[same] - str2[same]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmkhitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 19:10:48 by dmkhitar          #+#    #+#             */
/*   Updated: 2022/04/13 20:14:13 by dmkhitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t	i;
	char	*t_arr;
	char	t_c;

	t_arr = (char *)arr;
	t_c = (char)c;
	i = -1;
	if (t_arr)
	{
		while (++i < n)
			if (t_arr[i] == t_c)
				return ((void *)(t_arr + i));
	}
	return (NULL);
}

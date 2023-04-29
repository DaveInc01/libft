/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmkhitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 16:12:47 by dmkhitar          #+#    #+#             */
/*   Updated: 2022/04/13 19:36:35 by dmkhitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	space;

	if (count == SIZE_MAX || size == SIZE_MAX || (count * size) >= SIZE_MAX)
		return (NULL);
	space = count * size;
	ptr = malloc(space);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, space);
	return (ptr);
}

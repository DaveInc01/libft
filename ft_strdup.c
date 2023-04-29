/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmkhitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:36:26 by dmkhitar          #+#    #+#             */
/*   Updated: 2022/04/13 19:46:13 by dmkhitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*newstr;
	size_t	len;
	int		i;

	len = ft_strlen(str);
	newstr = malloc(len * sizeof(char));
	if (!newstr)
		return (NULL);
	i = -1;
	while (str[++i])
		newstr[i] = str[i];
	newstr[i] = 0;
	return (newstr);
}

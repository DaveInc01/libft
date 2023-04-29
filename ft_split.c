/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmkhitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:51:34 by dmkhitar          #+#    #+#             */
/*   Updated: 2022/04/11 22:43:12 by dmkhitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		i++;
		while (*s == c)
			s++;
		if (*s == '\0')
			i--;
		while (*s != c && *s)
			s++;
	}
	return (i);
}

static char	**ft_writter(char **wordspace, char const *s,
char c, size_t i)
{
	size_t	len;

	i = 0;
	while (*s)
	{
		if (*s && *s != c)
		{
			len = 0;
			while (*s && *s != c)
			{
				len++;
				s++;
			}
			wordspace[i] = ft_substr(s - len, 0, len);
			i++;
		}
		else
			s++;
	}
	wordspace[i] = 0;
	return (wordspace);
}

char	**ft_split(char const *s, char c)
{
	char	**wordspace;
	size_t	i;
	size_t	words;

	words = count(s, c);
	i = 0;
	if (!s)
		return (NULL);
	wordspace = malloc(sizeof(char *) * (words + 1));
	if (!wordspace)
		return (NULL);
	wordspace = ft_writter(wordspace, s, c, i);
	return (wordspace);
}

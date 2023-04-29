/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmkhitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:26:45 by dmkhitar          #+#    #+#             */
/*   Updated: 2022/07/11 21:05:48 by dmkhitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	m;
	int	sum;

	sum = 0;
	m = 1;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			m *= -1;
		str++;
	}
	while (*str != '\0')
	{
		if (*str >= 48 && *str <= 57)
		{
			sum = sum * 10 + (int )*str - '0';
			str++;
		}
		else
			return (m * sum);
	}
	return (m * sum);
}

int main()
{
	printf("%d", ft_atoi("-874"));
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonnet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:19:08 by nbonnet           #+#    #+#             */
/*   Updated: 2024/08/28 12:02:52 by nbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	n;

	i = 0;
	neg = 1;
	n = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i = i + 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '+')
			i++;
		else if (str[i] == '-')
		{
			neg *= -1;
			i++;
		}
	}
	while (str[i] >= '0' && str[i] <= '9')
		n = n * 10 + (str[i++] - 48);
	return (n * neg);
}
/*
int	main(void)
{
	char	str[] = " --+--+3504ab567";
	int	result;

	ft_atoi(str);
	result = ft_atoi(str);
	printf("%i\n", result);
	return (0);
}*/

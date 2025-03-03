/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonnet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 22:19:22 by nbonnet           #+#    #+#             */
/*   Updated: 2024/08/31 22:49:30 by nbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	n;

	n = 0;
	i = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i < nb && i != nb)
	{
		n = i * i;
		if (n == nb)
			return (i);
		i++;
	}	
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int	nb = 64;
	int i;

	ft_sqrt(nb);
	printf("%d", i);
	return (0);
}*/

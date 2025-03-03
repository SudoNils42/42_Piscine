/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonnet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 23:01:49 by nbonnet           #+#    #+#             */
/*   Updated: 2024/08/30 23:17:16 by nbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	t;

	i = power;
	t = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i > 1)
	{
		t = t * nb;
		i--;
	}
	return (t);
}
/*
#include <stdio.h>

int	main(void)
{	
	int	nb = 21;
	int	power = 4;

	ft_iterative_power(nb, power);
	printf("%d\n", ft_iterative_power(nb, power));
	return (0);
}*/

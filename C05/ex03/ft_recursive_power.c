/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonnet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 23:18:36 by nbonnet           #+#    #+#             */
/*   Updated: 2024/08/30 23:36:34 by nbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	t;

	i = power;
	t = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * (ft_recursive_power(nb, i - 1)));
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb = 21;
	int	power = 4;

	ft_recursive_power(nb, power);
	printf("%d\n", ft_recursive_power(nb, power));
	return (0);
}*/

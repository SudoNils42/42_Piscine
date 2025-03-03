/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonnet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 21:59:57 by nbonnet           #+#    #+#             */
/*   Updated: 2024/08/30 22:36:36 by nbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	t;

	i = nb;
	t = 1;
	if (i == 0)
		return (1);
	if (i < 0)
		return (0);
	while (i >= 1)
	{
			t = t * i;
			i--;
	}
	return (t);
}
/*
int	main(void)
{	
	int	nb;
	nb = 5;
	
	ft_iterative_factorial(nb);
	printf("%i", ft_iterative_factorial(nb));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonnet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 23:38:22 by nbonnet           #+#    #+#             */
/*   Updated: 2024/08/31 00:13:39 by nbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return ((ft_fibonacci (index - 1)) + (ft_fibonacci (index - 2)));
}

/*
#include <stdio.h>

int	main(void)
{	
	ft_fibonacci(index);
	printf("%d\n", ft_fibonacci(index));
	return (0);
}*/

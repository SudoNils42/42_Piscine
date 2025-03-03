/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonnet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 22:38:18 by nbonnet           #+#    #+#             */
/*   Updated: 2024/08/30 23:00:42 by nbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	t;

	t = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
//#include <stdio.h>
//int	main(void)
//{
//	int	nb = 7;
//
//	ft_recursive_factorial(nb);
//	printf("%d\n", ft_recursive_factorial(nb));
//	return (0);
//
//}

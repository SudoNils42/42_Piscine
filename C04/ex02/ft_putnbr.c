/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonnet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:03:48 by nbonnet           #+#    #+#             */
/*   Updated: 2024/08/27 20:07:39 by nbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	r;

	r = nb;
	if (r == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (r < 0)
	{
		ft_putchar(45);
		r = r * (-1);
	}
	if (r > 9)
	{
		ft_putnbr (r / 10);
		r = r % 10;
	}
	if (r <= 9)
	{
		r = r + 48;
		ft_putchar(r);
	}
}
/*
int	main(void)
{
	int	nb;

	nb = -2147483648;
	ft_putnbr(nb);
	return (0);
}*/

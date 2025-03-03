/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonnet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:48:17 by nbonnet           #+#    #+#             */
/*   Updated: 2024/08/21 14:39:16 by nbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{	
	int		i;
	char	c;

	i = 97;
	while (i <= 122)
	{
		c = i;
		write(1, &i, 1);
		i++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonnet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 21:04:07 by nbonnet           #+#    #+#             */
/*   Updated: 2024/08/28 21:30:55 by nbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = ac - 1;
	while (j < ac && j > 0)
	{
		if (av[j][i] != '\0')
		{
			write(1, &av[j][i], 1);
			i++;
		}
		else if (av[j][i] == '\0')
		{
			write(1, "\n", 1);
			j--;
			i = 0;
		}
	}
}

int	main(int ac, char **av)
{
	ft_rev_params(ac, av);
	return (0);
}

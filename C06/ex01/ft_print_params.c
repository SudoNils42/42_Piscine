/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonnet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:19:28 by nbonnet           #+#    #+#             */
/*   Updated: 2024/08/28 19:43:45 by nbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < ac)
	{
		if (av[j][i] != '\0')
		{
			write(1, &av[j][i], 1);
			i++;
		}
		else if (av[j][i] == '\0')
		{
			write(1, "\n", 1);
			j++;
			i = 0;
		}
	}
}

int	main(int ac, char	**av)
{
	ft_print_params(ac, av);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonnet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 00:13:55 by nbonnet           #+#    #+#             */
/*   Updated: 2024/09/10 01:40:18 by nbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **av1, char **av2)
{
	char	*temp;

	temp = *av1;
	*av1 = *av2;
	*av2 = temp;
}

int	ft_strcmp(char *av1, char *av2)
{
	int	i;

	i = 0;
	while (av1[i] && av2[i])
	{
		if (av1[i] != av2[i])
		{
			return (av1[i] - av2[i]);
		}
		i++;
	}
	return (av1[i] - av2[i]);
}

void	ft_sort(int ac, char **av)
{
	int	j;
	int	k;

	k = 1;
	while (k < ac - 1)
	{	
		j = 0;
		while (j < ac - 1)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
				ft_swap(&av[j], &av[j + 1]);
			j++;
		}
		k++;
	}
	j = 1;
	while (j < ac)
	{
		k = 0;
		while (av[j][k])
			write(1, &av[j][k++], 1);
		write(1, "\n", 1);
		j++;
	}	
}

int	main(int ac, char **av)
{
	ft_sort(ac, av);
	return (0);
}

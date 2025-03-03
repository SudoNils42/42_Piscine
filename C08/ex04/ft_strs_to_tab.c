/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonnet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 23:40:46 by nbonnet           #+#    #+#             */
/*   Updated: 2024/09/10 15:25:16 by nbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	int				j;
	t_stock_str		*p;

	i = 0;
	p = malloc(sizeof(t_stock_str) * (ac + 1));
	if (p == NULL)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j++])
			p[i].size = j;
		p[i].str = av[i];
		p[i].copy = malloc(sizeof(char) * (j + 1));
		j = 0;
		while (av[i][j])
		{
			p[i].copy[j] = av[i][j];
			j++;
		}
		p[i++].copy[j] = '\0';
	}
	p[i].str = 0;
	return (p);
}

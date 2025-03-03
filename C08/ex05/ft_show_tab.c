/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonnet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:54:57 by nbonnet           #+#    #+#             */
/*   Updated: 2024/09/10 15:26:43 by nbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"
#include <stdlib.h>

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
		write(1, "-", 1);
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
		write(1, &r, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 1;
	while (par[i].str)
	{
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		write(1, par[i].copy, par[i].size);
		write(1, "\n", 1);
		i++;
	}
}
/*
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
		while (av[i][j])
			j++;
		p[i].size = j;
		p[i].str = av[i];
		p[i].copy = malloc(sizeof(char) * (j + 1));
		j = -1;
		while (av[i][++j])
			p[i].copy[j] = av[i][j];
		p[i++].copy[j] = '\0';
	}
	p[i].str = 0;
	return (p);
}

int	main(int ac, char **av)
{	
	struct s_stock_str	*par;

	par = ft_strs_to_tab(ac, av);
	ft_show_tab(par);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonnet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:23:37 by nbonnet           #+#    #+#             */
/*   Updated: 2024/09/07 13:30:54 by nbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	size = max - min;
	tab = malloc(sizeof(int) * size);
	i = 0;
	while (min != max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*
#include <stdio.h>
int	main(void)
{
	int min = 2;
	int max = 1;
	int	*ptr;

	ptr = ft_range(min, max);
	printf("%p", ptr);
	return (0);
}*/

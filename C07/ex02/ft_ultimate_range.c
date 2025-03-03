/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonnet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:21:01 by nbonnet           #+#    #+#             */
/*   Updated: 2024/09/09 21:58:09 by nbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_babyrange(int min, int max)
{
	int	size;
	int	i;
	int	*babyrange;

	i = 0;
	size = max - min;
	babyrange = malloc(sizeof(int) * size);
	while (min != max)
	{
		babyrange[i] = min;
		i++;
		min++;
	}
	return (babyrange);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = ft_babyrange(min, max);
	return (size);
}

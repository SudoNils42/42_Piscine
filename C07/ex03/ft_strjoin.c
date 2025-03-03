/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonnet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:28:00 by nbonnet           #+#    #+#             */
/*   Updated: 2024/09/09 19:27:49 by nbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_totalsize(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (i < size)
	{
		k = 0;
		while (strs[i][k++] != '\0')
			j++;
		if (i < size - 1 && sep[0] != '\0')
		{
			k = 0;
			while (sep[k++] != '\0')
				j++;
		}
		i++;
	}
	j = j + 1;
	return (j);
}

void	ft_normi(int size, char **strs, char *sep, char *res)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	j = 0;
	while (i < size)
	{
		k = 0;
		l = 0;
		while (strs[i][l] != '\0')
			res[j++] = strs[i][l++];
		if (i < size - 1 && sep[0] != '\0')
		{
			k = 0;
			while (sep[k] != '\0')
				res[j++] = sep[k++];
		}
		i++;
	}
	res[j] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		j;
	int		k;
	int		l;
	char	*res;

	k = 0;
	l = 0;
	if (size == 0)
	{
		res = malloc(sizeof(char) * 1);
		if (res != NULL)
			res[0] = '\0';
		return (res);
	}
	j = ft_totalsize(size, strs, sep);
	res = malloc(sizeof(char) * j);
	ft_normi(size, strs, sep, res);
	j = 0;
	while (res[j] != '\0')
		j++;
	res[j] = '\0';
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	int	size = 4;
	char *strs[] = {"Salut", "cest", "moi", "!"};
	char	*sep = "sep";	
	char	*result;

	result = ft_strjoin(size, strs, sep);
	printf("%s\n", result);
	return (0);

}*/

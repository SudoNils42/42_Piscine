/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonnet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:19:44 by nbonnet           #+#    #+#             */
/*   Updated: 2024/09/09 19:30:27 by nbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		taill;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	taill = i + 1;
	dest = malloc(sizeof(char) * taill);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h> //verifier si malloc et free sont dans stdio ou unistd
int	main(void)
{
	char	src[] = "Hello World";
	char	*result = ft_strdup(src);

	printf("ceci est la destination: %s\n", result);
	return (0);
}*/

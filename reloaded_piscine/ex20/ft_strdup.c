/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:03:21 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/14 13:07:04 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	len;

	len = 0;
	while (src[len])
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = ft_strlen(src);
	dest = malloc(sizeof(char) * (i + 1));
	if (!(dest))
		return (NULL);
	return (ft_strcpy(dest, src));
}
/*
int	main(void)
{
	char	*saludo;
	char	*mirror;

	saludo = "42_Barcelona!";
	mirror = ft_strdup(saludo);
	if (mirror == NULL)
	{
		printf("error al duplicar la string \n");
		return (1);
	}
	printf("duplicado exitoso:\n%s\n%s\n", saludo, mirror);
	printf("estas son sus direcciones en memoria:\n%p\n%p\n", saludo, mirror);
	free(mirror);
	return (0);
}
*/

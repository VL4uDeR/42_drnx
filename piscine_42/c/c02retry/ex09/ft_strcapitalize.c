/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 08:16:24 by darsalga          #+#    #+#             */
/*   Updated: 2024/04/05 23:32:29 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 'a' + 'A';
		i++;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] - 'A' + 'a';
		while ((str[i] >= 32 && str[i] <= 47) || (str[i] > 57 && str[i] < 65))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 'a' + 'A';
			i++;
		}
	}
	return (str);
}

int	main(int n, char **arg)
{
//	char saludo[] = " la casa@orillas del !lAGO $Igue ah.i";
	
	ft_strcapitalize(arg[1]);
	printf("%s\n",arg[1]);
	return (0);
}

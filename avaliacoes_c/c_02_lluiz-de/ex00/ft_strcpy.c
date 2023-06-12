/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 10:45:45 by lluiz-de          #+#    #+#             */
/*   Updated: 2023/06/10 13:57:52 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*f_string;
	int		i;

	i = 0;
	f_string = dest;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (f_string);
}

int	main(void)
{
	char	b[15];
	char	*result;
	char	*result2;

	result = ft_strcpy(b, "Teste123");
	printf("%s\n", ft_strcpy(b, "Teste123"));
	result2 = ft_strcpy(result, "Arroz");
	printf("%s", result2);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:18:21 by lluiz-de          #+#    #+#             */
/*   Updated: 2023/06/10 14:16:16 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	z;

	z = 0;
	while (src[z] != '\0' && z < n)
	{
		dest[z] = src[z];
		z++;
	}
	while (z < n)
		dest[z++] = '\0';
	return (dest);
}

int	main(void)
{
	char b[5];
	printf("%s", ft_strncpy(b, "Teste", 3));

	return (0);
}

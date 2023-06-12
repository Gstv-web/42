/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 09:41:08 by madougla          #+#    #+#             */
/*   Updated: 2023/06/07 11:20:17 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

int main(void)
{
	printf("char\t*ft_strcpy(char *dest, char *src);\n");
	printf("---------------------------------------\n");
	char palavra1[] = "Pinheiros";
	char palavra2[] = "VisualStudioCode";
	printf("Palavra1 (antes): %s\n", palavra1);
	printf("Palavra2 (antes): %s\n\n", palavra2);
	ft_strcpy(palavra2, palavra1);
	printf("Palavra1 (depois): %s\n", palavra1);
	printf("Palavra2 (depois): %s\n", palavra2);
	return (0);
}
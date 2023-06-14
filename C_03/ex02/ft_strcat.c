/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:12:03 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/13 15:22:09 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*temp != '\0')
		temp++;
	while (*src != '\0')
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str_dest[13] = "Mano ";
// 	char *str_src = "do céu.";
// 	char *result = ft_strcat(str_dest, str_src);
// 	printf("%s", result);
// 	return (0);
// }

/*
Instancio um ponteiro de char para receber dest e a partir daí eu manipulo o
temp para receber os valores de src, que também alteram dest.
Primeiro itero sobre temp até não seja nulo;
Depois itero sobre src, fazendo com que os bytes nulos restantes recebam os
valores de src.
Mesmo definindo o texto, tenho que definir a quantidade de bytes em dest,
senão crasha.
*/
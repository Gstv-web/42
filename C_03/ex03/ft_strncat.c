/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:20:15 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/13 15:22:29 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	char	*temp;

	temp = dest;
	while (*temp != '\0')
		temp++;
	while (*src != '\0' && n > 0)
	{
		*temp = *src;
		temp++;
		src++;
		n--;
	}
	*temp = '\0';
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str_dest[10] = "Mano, ";
// 	char *str_src = "doidera";
// 	char *result = ft_strncat(str_dest, str_src, 3);
// 	printf("%s", result);
// 	return (0);
// }

/*
Semelhante ao exercício anterior, mas agora no segundo loop, verifico se n > 0 e
decremento o valor de n.
Procurar meio de definir a quantidade de bytes sem declarar.
*/
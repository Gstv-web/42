/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:53:19 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/12 09:59:59 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{	
	int	idx;

	idx = 0;
	while (src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = src[idx];
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str_dest[] = "Doidera";
// 	char str_src[] = "Hihihi";

// 	printf("String dest: %s\n", str_dest);
// 	printf("String src: %s\n", str_src);
// 	ft_strcpy(str_dest, str_src);
// 	printf("New string dest: %s\n", str_dest);
// 	return (0);
// }

/*
Instanciei dois arrays: um que será a base que será copiada e outra que será
alterada. Todo o texto será alterado (mas só funciona se o array que for alte-
rado tiver o mesmo tamanho ou maior)
*/
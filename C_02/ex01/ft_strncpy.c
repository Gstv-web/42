/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:24:21 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/12 10:01:25 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str_dest[] = "xxxxxxxxx";
// 	char str_src[] = "legal";
// 	int idx_stop = 4;

// 	printf("String dest: %s\n", str_dest);
// 	printf("String src: %s\n", str_src);
// 	char *new_dest = ft_strncpy(str_dest, str_src, idx_stop);
// 	printf("New string dest with index %i: %s", idx_stop, new_dest);
// }

/*
Instanciei dois arrays: um que será a base que será copiada e outra que será
alterada. Similar ao ex00 strcpy, porém aqui eu defino até qual índice da fonte
(src) eu quero passar, preservando o restante da outra sring. (Me parece que só
funciona caso o array que for alterado for igual ou maior também.)
*/
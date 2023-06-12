/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:14:09 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/12 10:12:05 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_get_size(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
		idx++;
	return (idx);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	idx;

	idx = 0;
	if (size == 0)
	{
		while (src[idx] != '\0')
			idx++;
		return (idx);
	}
	while (idx < size - 1 && src[idx] != '0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	if (idx < size)
	{
		dest[idx] = src[size - 1];
		dest[idx +1] = '\0';
	}
	while (src[idx] != '\0')
		idx++;
	return (idx);
}

// #include <stdio.h>
// int    main(void)
// {
//     char    src[] = "Hihihi";
//     printf("Source: %s\n", src);
//     char    dest[] = "EI";
// 	printf("Dest: %s\n", dest);
// 	unsigned int size = ft_get_size(src);
//     int r = ft_strlcpy(dest, src, size);
//     printf("Dest depois: %s\n", dest);
//     printf("Tamanho da string %d\n", r);
// }

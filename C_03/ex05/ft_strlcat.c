/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:00:43 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/13 17:30:18 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	char	*temp;
	int		length;

	temp = str;
	length = 0;
	while (*temp != '\0')
	{
		length++;
		temp++;
	}
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = 0;
	while (src[i] && len_dest + i + 1 < size)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	if (size < len_dest)
		return (len_src + size);
	else
		return (len_src + len_dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str_dest[] = "Ai meu deus ";
// 	char str_src[] = "como é bom ser vida loka";
// 	int result = ft_strlcat(str_dest, str_src, 38);
// 	printf("%d", result);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:39:54 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/12 10:09:56 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] > 64 && str[idx] < 91)
			str[idx] = str[idx] + 32;
		idx++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)	
// {
// 	char	result[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// 	printf("Antes da função : %s \n", result);
// 	printf("Retorno da função : %s \n", ft_strlowcase(result));
// }
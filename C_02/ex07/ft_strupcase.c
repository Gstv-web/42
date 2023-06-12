/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:09:21 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/12 10:08:54 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] > 96 && str[idx] < 123)
			str[idx] = str[idx] - 32;
		idx++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)	
// {
// 	char	result[] = "abcdefghijhlmnopqrstuvwxyz";
// 	printf("Antes da função : %s \n", result);
// 	printf("Retorno da função : %s \n", ft_strupcase(result));
// }	
/*
Processo semelhante, porém a condição é de rodar em tudo e pegar o que for
minúsculo e então transformar para maiúsculo (rolê do ascii)
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:29:20 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/13 17:29:42 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str1[] = "Quero cafééé";
// 	char str2[] = "Quero cafééé";
// 	int result = ft_strcmp(str1, str2);
// 	if (result != 0)
// 		printf("str1 é não é igual str2.\nValor de result: %i", result);
// 	else
// 		printf("str1 é igual str2.\nValor de result: %i", result);
// 	return (0);
// }

/*
Criei uma função que recebe duas strings e enquanto a primeira string estiver
rodando e se se for idêntica a segunda string, incrementa-se os índices.
Depois retorna o valor da diferença. Se o resultado não for 0, as strings são
diferentes.
*/
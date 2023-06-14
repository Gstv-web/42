/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:55:32 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/13 17:29:57 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str1[] = "Sacanagem";
// 	char str2[] = "Sacudo";
// 	int result = ft_strncmp(str1, str2, 4);
// 	if (result != 0)
// 		printf("str1 não é igual str2.\nValor de result: %i", result);
// 	else
// 		printf("Trecho de str1 é igual a str2.\nValor de result: %i", result);
// 	return (0);
// }

/*
*(unsigned char*)s1 -> converte-se o ponteiro s1 para o tipo unsigned char
e utiliza o ponteiro de desreferenciação para obter o valor apontado para
esse ponteiro, em outras palavras, significa obter o valor (*) do tipo
unsigned char para o qual o ponteiro s1 aponta
 */
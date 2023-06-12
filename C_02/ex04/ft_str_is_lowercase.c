/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:11:20 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/12 10:05:47 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] > 96 && str[idx] < 123)
			idx++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int result = ft_str_is_lowercase("aeita!");
// 	int result2 = ft_str_is_lowercase("aeita");
// 	int result3 = ft_str_is_lowercase("aeitA");
// 	int result4 = ft_str_is_lowercase("");

// 	printf("Retorno da função 1: %i\n", result);
// 	printf("Retorno da função 2: %i\n", result2);
// 	printf("Retorno da função 3: %i\n", result3);
// 	printf("Retorno da função 4: %i\n", result4);
// }

/*
Também semelhante aos últimos exercícios, criei uma variável que funcionará
como índice e enquanto o índice da string não for nulo:
- se o caractere do índice atual estiver entre 98~122 do ascii (a~z) ou se a
string estiver vazia, retorna 1.
- qualquer outro caractere retorna 0.
*/
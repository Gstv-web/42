/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 14:44:27 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/12 10:04:36 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] > 47 && str[idx] < 58)
			idx++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int result = ft_str_is_numeric("1234a");
// 	int result2 = ft_str_is_numeric("11124");
// 	int result3 = ft_str_is_numeric("321@");
// 	int result4 = ft_str_is_numeric("");
// 	printf("Retorno da função 1: %i\n", result);
// 	printf("Retorno da função 2: %i\n", result2);
// 	printf("Retorno da função 3: %i\n", result3);
// 	printf("Retorno da função 4: %i\n", result4);
// }

/*
Semelhante ao último exercício, eu faço uma variável que funcionará como índice
e enquanto o índice atual da string não for nulo:
- se o caractere do índice atual estiver entre 48~57 do ascii (0~9), ou
se a string estiver vazia, retorna 1.
- se houver qualquer outro caractere na string, retorna zero.
*/
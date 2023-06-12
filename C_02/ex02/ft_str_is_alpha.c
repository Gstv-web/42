/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 11:52:18 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/12 10:02:40 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] > 96 && str[idx] < 123)
			idx++;
		else if (str[idx] > 64 && str[idx] < 91)
			idx++;
		else if (*str == '\0')
			return (1);
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int result = ft_str_is_alpha("");
// 	int result2 = ft_str_is_alpha("assD");
// 	int result3 = ft_str_is_alpha("eas3aa");
// 	int result4 = ft_str_is_alpha("*DAS");
// 	printf("Retorna 1 se a string tiver somente caracteres alfabéticos\n");
// 	printf("Retorna 0 se houver qualquer outro caractere\n");
// 	printf("Retorno da função1: %i\n", result);
// 	printf("Retorno da função2: %i\n", result2);
// 	printf("Retorno da função3: %i\n", result3);
// 	printf("Retorno da função4: %i\n", result4);
// }

/*
OK

Aqui eu precisei criar uma variável pra armazenar o valor do retorno da função
ft_str_is_alpha. Nela, eu defini uma variável pra contar o índice.
Enquanto o índice não for nulo, faço as seguintes verificações:
- Se o caractere do índice atual estiver entre a e z, idx++;
- se o caractere do índice atual estiver entre A e Z, idx++;
Pra ambos, se tudo passar ao longo da string, retorna 1
- Se o array estiver vazio, retorna 1;
- Se o índice atual tiver um caractere numérico, sai do loop e retorna 0.
*/
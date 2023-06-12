/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:36:13 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/12 10:08:17 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] > 31 && str[idx] < 127)
			idx++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int result = ft_str_is_printable("");
// 	int result2 = ft_str_is_printable("sad(-300!#$$*&csd0) isto");
// 	int result3 = ft_str_is_printable("Gus\nta\tvo");
// 	printf("Retorno da função 1: %i\n", result);
// 	printf("Retorno da função 2: %i\n", result2);
// 	printf("Retorno da função 3: %i\n", result3);
// }

/*
semelhante aos últimos exercícios, porém a condição é se na string há somente
os caracteres printáveis da ascii. Se houver \n, \a, \t ou coisa do tipo,
retorna 0. Caso contrário, 1.
*/
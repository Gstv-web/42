/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:29:39 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/12 10:07:12 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] > 64 && str[idx] < 91)
			idx++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int result = ft_str_is_uppercase("OLOK!");
// 	int result2 = ft_str_is_uppercase("OLOKO");
// 	int result3 = ft_str_is_uppercase("");
// 	int result4 = ft_str_is_uppercase("OLoK0");
// 	printf("Retorno da função 1: %i\n", result);
// 	printf("Retorno da função 2: %i\n", result2);
// 	printf("Retorno da função 3: %i\n", result3);
// 	printf("Retorno da função 4: %i\n", result4);
// }

// Exercício 04 ao contrário. Tem que ser tudo maiúsculo ao invés de minúsculo
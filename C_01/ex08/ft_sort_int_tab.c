/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:26:44 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/08 13:31:38 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap_num(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	int	idx;

	idx = 0;
	while (idx < size)
	{
		if (tab[idx] > tab[idx + 1])
		{
			ft_swap_num(&tab[idx], &tab[idx + 1]);
			idx = 0;
		}
		else
			idx++;
	}
	return ;
}

void	ft_swap_num(int *a, int *b)
{
	int	buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}

// int	main(void)
// {
// 	int i;
// 	int arr[6];

// 	arr[0] = 3;
// 	arr[1] = 7;
// 	arr[2] = 7;
// 	arr[3] = 8;
// 	arr[4] = 5;
// 	arr[5] = 1;
// 	i = 0;

// 	while (i < 6)
// 	{
// 		printf("%i", arr[i]);
// 		i++;
// 	}
// 	ft_sort_int_tab(arr, i);
// 	i = 0;
// 	printf("\n");
// 	while (i < 6)
// 	{
// 		printf("%i", arr[i]);
// 		i++;
// 	}
// 	return (0);
// }

// OK?

// Aqui eu criei um array de tamanho 6 e botei números aleatórios.
// E eu pego o tamanho do array com i e mando pra função o array e o tamanho
// do array (i);
// dentro de ft_sort_int_tab eu crei uma variável pra valer de
// índice - como o i - e enquanto idx for menor que o tamanho do array (size)
// vai verificar se o índice do tab (arr) é maior que o próximo índice do tab.
// Se for, chama a função ft_swap_num que recebe os dois valores da verificação
// e faz a troca, para então zerar o idx e começar tudo de novo, até que os
// maiores valores vão para o final e os menores para frente
// então o que era {3, 7, 9, 8, 5, 1} vira {1, 3, 5, 7, 8, 9}
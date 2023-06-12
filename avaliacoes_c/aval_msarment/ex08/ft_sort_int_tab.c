/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:24:53 by msarment          #+#    #+#             */
/*   Updated: 2023/06/06 11:55:33 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

int	main(void)
{
	int	i;
	int	array[10] = {10, 3, 1, 2, 5, 6, 7, 8, 9, 4};

		i = 0;
	while (i < 10)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(&array[0], 10);
	i = 0;
	while (i < 10)
	{
		printf("%d ", array[i]);
		i++;
	}
}

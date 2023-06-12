/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:53:51 by msarment          #+#    #+#             */
/*   Updated: 2023/06/06 11:51:14 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	aux = 0;
	while (i < size)
	{
		aux = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = aux;
		i++;
		size--;
	}
}

int	main(void)
{
	int	i;
	int	array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, -10};

		i = 0;
	while (i < 10)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(&array[0], 10);
	i = 0;
	while (i < 10)
	{
		printf("%d ", array[i]);
		i++;
	}
}

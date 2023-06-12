/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 18:42:33 by msarment          #+#    #+#             */
/*   Updated: 2023/06/06 11:37:12 by jgustavo         ###   ########.fr       */
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

int	main(void)
{
	int	nbr1;
	int	nbr2;
	int	*a;
	int	*b;

	nbr1 = 5;
	nbr2 = 10;
	a = &nbr1;
	b = &nbr2;
	ft_swap(a, b);
	printf("%i e %i", nbr1, nbr2);
}

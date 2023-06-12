/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:59:19 by msarment          #+#    #+#             */
/*   Updated: 2023/06/06 11:45:59 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	store;

	store = *a;
	*a = *a / *b;
	*b = store % *b;
}

int	main(void)
{
	int	a = 10;
	int	b = 2;
	int	*ptr1 = &a;
	int	*ptr2 = &b;

	printf("%d e %d \n", *ptr1, *ptr2);
	ft_ultimate_div_mod(ptr1, ptr2);
	printf("%d e %d \n", *ptr1, *ptr2);
}

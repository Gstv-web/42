/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:13:36 by msarment          #+#    #+#             */
/*   Updated: 2023/06/06 11:23:00 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int a;
	int *nbr;

	a = 30;
	nbr = &a;

	ft_ft(nbr);
	printf("%i", a);
	return (0);
}
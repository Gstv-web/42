/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:44:37 by msarment          #+#    #+#             */
/*   Updated: 2023/06/06 11:42:17 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;

}

int	main(void)
{
	int	a = 5;
	int	b = 2;
	int c = 0;
	int d = 0;	
	int	*div = &c;
	int	*mod = &d;
	

	ft_div_mod(a, b, div, mod);
	printf("%d e %d", *div, *mod);
}

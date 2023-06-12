/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedanton <pedanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 17:04:47 by pedanton          #+#    #+#             */
/*   Updated: 2023/06/07 15:49:11 by pedanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int main()
// {	
// 	int c;
// 	int d;
// 	int *aa;
// 	int *bb;

// 	c = 10;
// 	d = 2;
// 	aa = &c;
// 	bb = &d;
// 	ft_ultimate_div_mod(aa, bb);
// 	printf("%d\n", *aa);
// 	printf("%d",*bb);
// }

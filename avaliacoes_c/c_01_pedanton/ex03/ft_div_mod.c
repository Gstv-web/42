/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedanton <pedanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:34:05 by pedanton          #+#    #+#             */
/*   Updated: 2023/06/07 15:41:42 by pedanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main ()
// {
// 	int aa;
// 	int bb;
// 	int c;
// 	int d;
// 	int *ptr1;
// 	int *ptr2;

// 	aa = 10;
// 	bb = 2;
// 	c = 1;
// 	d = 1;
// 	ptr1 = &c;
// 	ptr2 = &d;

// 	ft_div_mod(aa, bb, ptr1, ptr2);
// 	printf("%d\n", *ptr1);
// 	printf("%d", *ptr2);
// }
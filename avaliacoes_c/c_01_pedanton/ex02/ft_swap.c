/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedanton <pedanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:24:08 by pedanton          #+#    #+#             */
/*   Updated: 2023/06/07 15:27:09 by pedanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

// int	main()
// {	
// 	int a;
// 	int b;
// 	int *aa;
// 	int *bb;

// 	a = 6;
// 	b = 5;
// 	aa = &a;
// 	bb = &b;
// 	ft_swap(aa, bb);
// 	printf("%d\n", a);
// 	printf("%d", b);
// }
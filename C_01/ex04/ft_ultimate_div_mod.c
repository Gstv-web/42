/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 09:32:09 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/08 10:11:39 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	buffer;

	buffer = *a;
	*a = *a / *b;
	*b = buffer % *b;
}

// int	main(void)
// {
// 	int a;
// 	int b;
// 	int *pta;
// 	int *ptb;

// 	a = 10;
// 	b = 3;
// 	pta = &a;
// 	ptb = &b;
// 	ft_ultimate_div_mod(pta, ptb);
// 	return (0);
// }

//OK

// Nesse caso a função só recebe os ponteiros, então foi preciso criar uma
// variável para armazenar o valor de a já é alterado logo em seguida e depois
// fazer o cálculo do módulo com o buffer - que permanece com o valor antigo
// de a.
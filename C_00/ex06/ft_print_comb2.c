/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:25:40 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/08 16:42:03 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_num(char n1, char n2, char n3, char n4);

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcomma(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_num(char n1, char n2, char n3, char n4)
{
	ft_putchar(n1);
	ft_putchar(n2);
	ft_putchar(' ');
	ft_putchar(n3);
	ft_putchar(n4);
	if (!(n1 == 57 && n2 == 56 && n3 == 57 && n4 == 57))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_set_combination(char a, char b)
{
	char	d1;
	char	d2;
	char	d3;
	char	d4;

	d1 = (b % 10) + '0';
	d2 = (b / 10) + '0';
	d3 = (a % 10) + '0';
	d4 = (a / 10) + '0';
	ft_print_num(d4, d3, d2, d1);
}

void	ft_print_comb2(void)
{
	int	comb1;
	int	comb2;

	comb1 = 0;
	while (comb1 <= 98)
	{
		comb2 = comb1 + 1;
		while (comb2 <= 99)
		{
			ft_set_combination(comb1, comb2);
			comb2++;
		}
		comb1++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }

// OK
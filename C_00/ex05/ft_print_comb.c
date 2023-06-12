/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:53:26 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/07 09:19:45 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comma(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	print_num(int n1, int n2, int n3)
{
	ft_putchar(n1 + '0');
	ft_putchar(n2 + '0');
	ft_putchar(n3 + '0');
}

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = 0;
	while (n1 <= 7)
	{
		n2 = n1 + 1;
		while (n2 <= 8)
		{
			n3 = n2 + 1;
			while (n3 <= 9)
			{
				print_num(n1, n2, n3);
				if (n1 != 7 || n2 != 8 || n3 != 9)
					ft_print_comma();
				n3++;
			}
			n3 = 3;
			n2++;
		}
		n2 = 1;
		n1++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }

// OK
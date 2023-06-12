/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 04:31:58 by jaqribei          #+#    #+#             */
/*   Updated: 2023/05/31 11:26:27 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb2(void);
void	ft_putchar(char c);
void	ft_combination(int x, int y);
void	ft_print(char a, char b, char c, char d);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	if (!(a == 57 && b == 56 && c == 57 && d == 57))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_combination(int x, int y)
{
	char	unit;
	char	ten;
	char	hundred;
	char	thousand;

	unit = (y % 10) + '0';
	ten = (y / 10) + '0';
	hundred = (x % 10) + '0';
	thousand = (x / 10) + '0';
	ft_print(thousand, hundred, ten, unit);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_combination(first, second);
			second++;
		}
		first++;
	}
	ft_putchar('\n');
}


int	main(void)
{
	ft_print_comb2();
	return (0);
}


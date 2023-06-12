/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqribei <jaqribei@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 05:04:13 by jaqribei          #+#    #+#             */
/*   Updated: 2023/05/31 05:33:27 by jaqribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_combn(int n);
void	ft_putchar(char c);
void	ft_recursive_combination(int number);
//void	ft_print_recursive(int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//void	ft_print_recursive(int n)
//{
//	char	charnumber;
//
//	if (number / 10 == 0)
//	{
//		charnumber = (number % 10) + '0';
//		ft_putchar(charnumber);
//		return ;
//	}
//	ft_print_recursive(number / 10);
//	charnumber = (number % 10) + '0';
//	ft_putchar(charnumber);
//}

void	ft_recursive_combination(int number)
{
	char	charnumber;

	if (number / 10 == 0)
	{
		charnumber = (number % 10) + '0';
		charnumber = 48;
		while (charnumber <= 57)
		{
			ft_putchar(charnumber);
			ft_putchar(' ');
			charnumber++;
		}
		return ;
	}
	ft_recursive_combination(charnumber / 10);
	charnumber = (number % 10) + '0';
	ft_putchar(charnumber);
}

void	ft_print_combn(int n)
{
	int	i;

	i = 0;
	while (i <= n)
	{
		ft_recursive_combination(n);
		i++;
	}
	ft_putchar('\n');
}
/*
int	main(void)
{
	ft_print_combn(1);
	return (0);
}
*/

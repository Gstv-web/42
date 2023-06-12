/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqribei <jaqribei@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 01:51:16 by jaqribei          #+#    #+#             */
/*   Updated: 2023/05/31 05:29:58 by jaqribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_print_recursive(int number);
void	ft_is_negative(int number);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_recursive(int number)
{
	char	charnumber;

	if (number / 10 == 0)
	{
		charnumber = (number % 10) + '0';
		ft_putchar(charnumber);
		return ;
	}
	ft_print_recursive(number / 10);
	charnumber = (number % 10) + '0';
	ft_putchar(charnumber);
}

void	ft_is_negative(int number)
{
	if (number < 0)
	{
		ft_putchar('-');
		if (number == -2147483648)
		{
			ft_putchar(50);
			number = number + 2000000000;
		}
		number *= -1;
		ft_print_recursive(number);
	}
}

void	ft_putnbr(int nb)
{	
	if (nb < 0)
		ft_is_negative(nb);
	else
		ft_print_recursive(nb);
	ft_putchar('\n');
}		

/*
int	main(void)
{
	ft_putnbr(-9455988);
	ft_putnbr(-2147483648);
	ft_putnbr(2147483647);
	ft_putnbr(-8);
	ft_putnbr(16355988);
	ft_putnbr(0);
	return (0);
}
*/

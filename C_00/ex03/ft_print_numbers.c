/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:50:37 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/07 09:17:14 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	n;

	n = 48;
	while (n < 58)
	{
		write(1, &n, 1);
		n++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
}
*/

// OK
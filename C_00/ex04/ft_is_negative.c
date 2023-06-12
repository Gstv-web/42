/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:29:36 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/07 09:17:29 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	response[2];

	response[0] = 'P';
	response[1] = 'N';
	if (n > 0 || n == '\0')
	{
		write(1, &response[0], 1);
	}
	else
	{
		write(1, &response[1], 1);
	}
}

/*
int	main(void)
{
	ft_is_negative(-2);
}
*/

// OK
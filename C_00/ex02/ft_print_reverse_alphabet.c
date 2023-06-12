/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:39:47 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/07 09:17:06 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	lt;	

	lt = 'z';
	while (lt >= 'a')
	{
		write(1, &lt, 1);
		lt--;
	}
}

/*
int	main(void)
{
	ft_print_reverse_alphabet();
}
*/

// OK
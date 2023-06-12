/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 10:15:02 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/07 09:16:59 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	lt;

	lt = 97;
	while (lt <= 'z')
	{
		write(1, &lt, 1);
		lt = lt + 1;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
}
*/

// OK
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:49:34 by lluiz-de          #+#    #+#             */
/*   Updated: 2023/06/10 14:13:41 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 32) && (str[i] <= 126)))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)

{
	printf("%d", ft_str_is_printable("Lucas"));
	printf("\n");
	printf("%d", ft_str_is_printable("Lu\nca\ts"));
	return (0);
}

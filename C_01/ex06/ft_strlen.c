/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:06:03 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/08 13:17:09 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (*c != '\0')
	{
		c++;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	printf("%i \n", ft_strlen("Hihihi"));
// 	return (0);
// }

// OK

// Mesma coisa que o exercício anterior, mas sem printar na tela;
// Descobrir como pegar o valor do return
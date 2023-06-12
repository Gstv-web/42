/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 09:52:10 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/08 13:13:56 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

// int	main(void)
// {
// 	ft_putstr("Eita");
// 	return (0);
// }

// OK

// Estrutura básica para printar strings.
// Posso simplesmente pegar o tamanho dela pelo i sem precisar printar
// A função recebe a *str, mas no write eu não boto &str, somente str
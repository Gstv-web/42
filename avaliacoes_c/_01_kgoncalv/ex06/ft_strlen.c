/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:49:07 by kgoncalv          #+#    #+#             */
/*   Updated: 2023/06/07 10:26:00 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (*str != '\0')
	{
		x++;
		str++;
	}
	write(1, &x, 1);
	return (x);
}


int	main(void)
{
	char str[] = "kayke";
	char *p_str;

	p_str = str;
	ft_strlen(p_str);
}

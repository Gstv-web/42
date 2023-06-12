/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:30:46 by lluiz-de          #+#    #+#             */
/*   Updated: 2023/06/10 14:09:23 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_alpha(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(is_alpha(str[i])))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("%d", ft_str_is_alpha("Lucas"));
	printf("\n");
	printf("%d\n", ft_str_is_alpha("T3st3"));
	printf("%d", ft_str_is_alpha(""));
	return (0);
}

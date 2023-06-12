/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluiz-de <lluiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:48:54 by lluiz-de          #+#    #+#             */
/*   Updated: 2023/06/10 13:05:37 by lluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'A') && (str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d", ft_str_is_uppercase("LUcAs"));
// 	printf("%d", ft_str_is_uppercase("lucas"));
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluiz-de <lluiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:45:05 by lluiz-de          #+#    #+#             */
/*   Updated: 2023/06/10 13:05:22 by lluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	is_num(char c)
{
	return ((c >= '0') && (c <= '9'));
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(is_num(str[i])))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d", ft_str_is_numeric("0123Lucas"));
// 	printf("\n");
// 	printf("%d", ft_str_is_numeric("T3st3"));
// 	printf("\n");
// 	printf("%d", ft_str_is_numeric("0123456789"));
// 	return (0);
// }

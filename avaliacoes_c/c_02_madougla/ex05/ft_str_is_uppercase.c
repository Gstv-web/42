/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madougla <madougla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 09:55:17 by madougla          #+#    #+#             */
/*   Updated: 2023/06/07 10:37:50 by madougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	is_upper(char letra)
{
	int	caps;

	caps = 65;
	while (caps < 91)
	{
		if (letra == caps)
		{
			return (1);
		}
		caps++;
	}
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_upper(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main(void)
{
	printf("int\tft_str_is_uppercase(char *str);\n");
	printf("---------------------------------------\n");
	char str[] = "ABCDEFGHIJKLM";
	int result = ft_str_is_uppercase(str);
	if (result) {
		printf("É feita com letras maiúsculas.");
	} else {
		printf("Não é.");
	}
	printf("\n");
	return (0);
}
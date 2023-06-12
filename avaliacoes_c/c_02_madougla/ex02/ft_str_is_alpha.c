/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 09:44:35 by madougla          #+#    #+#             */
/*   Updated: 2023/06/07 11:29:37 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_letter_alphabetic(char letra)
{
	int	caps;
	int	small;

	caps = 65;
	while (caps < 91)
	{
		if (letra == caps)
		{
			return (1);
		}
		caps++;
	}
	small = 97;
	while (small < 123)
	{
		if (letra == small)
		{
			return (1);
		}
		small++;
	}	
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_letter_alphabetic(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main(void)
{
	printf("int\tft_str_is_alpha(char *str);\n");
	printf("---------------------------------------\n");
	char str[] = "dxzCvxcg2cg";
	int result = ft_str_is_alpha(str);
	printf("Vamos ver se a string <<%s>> é feita com letras.\n", str);
	if (result) {
		printf("É feita com letras.\n");
	} else {
		printf("Não é\n.");
	}
	return (0);
}
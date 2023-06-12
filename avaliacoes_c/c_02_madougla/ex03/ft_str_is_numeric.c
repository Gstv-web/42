/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 09:49:30 by madougla          #+#    #+#             */
/*   Updated: 2023/06/07 11:30:39 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_number(char numero)
{
	int	i;

	i = 48;
	while (i <= 57)
	{
		if (numero == i)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_number(str[i]))
		{
			return (0);
		}	
		i++;
	}	
	return (1);
}

int main(void)
{
	printf("int\tft_str_is_numeric(char *str);\n");
	printf("---------------------------------------\n");
	char str[] = "0123456789a";
	int result = ft_str_is_numeric(str);
	printf("Vamos ver se a string <<%s>> é feita com números.\n", str);
	if (result) {
		printf("É feita com numeros");
	} else {
		printf("Não é");
	}
	printf("\n");
	char str2[] = "0123456789";
	int result2 = ft_str_is_numeric(str2);
	printf("Vamos ver se a string <<%s>> é feita com números.\n", str2);
	if (result2) {
		printf("É feita com numeros");
	} else {
		printf("Não é");
	}
	printf("\n");
	return (0);
}
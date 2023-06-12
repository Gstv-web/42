/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madougla <madougla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 09:59:15 by madougla          #+#    #+#             */
/*   Updated: 2023/06/07 10:37:53 by madougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	is_printable(char letra)
{
	int	char_decimal;

	char_decimal = 32;
	while (char_decimal < 127)
	{
		if (letra == char_decimal)
		{
			return (1);
		}
		char_decimal++;
	}
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_printable(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main(void)
// {
// 	printf("int\tft_str_is_printable(char *str);\n");
// 	printf("---------------------------------------\n");
// 	char str[] = "ABCDEFGHIJKLM";
// 	int result = ft_str_is_printable(str);
// 	if (result) {
// 		printf("É feita com letras printáveis.");
// 	} else {
// 		printf("Não é.");
// 	}
// 	printf("\n");
// 	return (0);
// }
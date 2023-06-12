/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madougla <madougla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 09:54:47 by madougla          #+#    #+#             */
/*   Updated: 2023/06/07 10:37:47 by madougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	is_lowercase(char letra)
{
	int	small;

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

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_lowercase(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main(void)
// {
// 	printf("int\tft_str_is_lowercase(char *str);\n");
// 	printf("---------------------------------------\n");
// 	char str[] = "abcdefgijklmnopqrstuvwzyz";
// 	int result = ft_str_is_lowercase(str);
// 	if (result) {
// 		printf("É feita com letras minusculas.");
// 	} else {
// 		printf("Não é.");
// 	}
// 	printf("\n\n");
// 	char str2[] = "abcdefgADASDASopqrstuvwzyz";
// 	int result2 = ft_str_is_lowercase(str2);
// 	if (result2) {
// 		printf("É feita com letras minusculas.");
// 	} else {
// 		printf("Não é.");
// 	}
// 	printf("\n");
// 	return (0);
// }
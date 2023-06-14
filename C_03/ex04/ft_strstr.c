/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:44:06 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/13 17:27:37 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{	
	char	*temp_str;
	char	*temp_to_find;

	while (*str)
	{
		temp_str = str;
		temp_to_find = to_find;
		while (*temp_str && *temp_to_find && (*temp_str == *temp_to_find))
		{
			temp_str++;
			temp_to_find++;
		}
		if (*temp_to_find == '\0')
			return (str);
		str++;
	}
	return ('\0');
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "Xuxa, a Sasha fez xixi no chão da sala.";
// 	char to_find[] = "no";
// 	char *result = ft_strstr(str, to_find);
// 	if (result != NULL)
// 		printf("%s", result);
// 	else
// 		printf("Not found.");
// 	return (0);
// }

/*
Nessa função eu instancio dois ponteiros - um para a própria string e outra para
a string que será o termo a ser encontrado (to_find);
Para o while, verifico se os caracteres são iguais e avanço os dois ponteiros.
terminando o loop, se o ponteiro de "to_find" for '\0', retorna a string a
partir do que foi procurado.
*/
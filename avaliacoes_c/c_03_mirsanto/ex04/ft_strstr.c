/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:50:29 by mirsanto          #+#    #+#             */
/*   Updated: 2023/06/08 16:10:12 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return ((void *)0);
}

int main(void)
{
	char str[] = "Hello, I am a string!";
	char to_find[] = "z";

	char *result = ft_strstr(str, to_find);

	if (result != 0)
	{
		printf("\"%s\"found in %ld of \"%s\"\n", to_find, result - str, str);
	}
	else
	{
		printf("The string \"%s\" was NOT found in \"%s\"\n", to_find, str);
	}
	return (0);
}

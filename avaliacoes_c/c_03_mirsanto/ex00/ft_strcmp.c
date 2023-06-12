/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 18:41:48 by mirsanto          #+#    #+#             */
/*   Updated: 2023/06/08 15:52:11 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((int)s1[i] - (int)s2[i]);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[20] = "Hello, world!";
    char str2[20] = "Hello, world, mêo!";

    int cmp = ft_strcmp(str1, str2);

    if (cmp == 0)
    {
        printf("The strings are equal.\n");
    }
    else if (cmp < 0)
    {
        printf("str1 is less than str2.\n");
    }
    else
    {
        printf("str1 is greater than str2.\n");
    }

    return 0;
}

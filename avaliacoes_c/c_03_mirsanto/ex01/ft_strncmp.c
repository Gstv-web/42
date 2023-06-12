/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsanto <mirsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 19:32:35 by mirsanto          #+#    #+#             */
/*   Updated: 2023/06/08 04:06:28 by mirsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((int)s1[i] - (int)s2[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
//     char str1[] = "Hello, world!";
//     char str2[] = "Hello!";
//     int result;

//     result = ft_strncmp(str1, str2, 5);

//     if (result == 0)
//     {
//         printf("The first 5 characters are equal.\n");
//     }
//     else if (result < 0)
//     {
//         printf("the first 5 characters of string1 are less than string2.\n");
//     }
//     else
//     {
//         printf("the first 5 of string1 are greater than string2.\n");
//     }

//     return 0;
// }

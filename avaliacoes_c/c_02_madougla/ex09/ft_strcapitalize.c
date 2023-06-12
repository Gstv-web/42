/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 10:05:33 by madougla          #+#    #+#             */
/*   Updated: 2023/06/07 11:42:48 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	nova_palavra;

	i = 0;
	nova_palavra = 1;
	while (str[i] != '\0')
	{
		if (nova_palavra == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			nova_palavra = 0;
		}
		else if (str[i] == ' ')
		{
			nova_palavra = 1;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int main(void)
{
	printf("char\t*ft_strcapitalize(char *str);\n");
	printf("---------------------------------------\n");
	//salut, comMent tu vas ? 42mOts quarAnte-dEux; cinquante+et+un
	char str[] = "salut, comMent tu vas ? 42mOts quarAnte-dEux; cinquante+et+un";
	printf("Sentença original: %s \n", str);
	printf("Sentença nova: %s \n", ft_strcapitalize(str));
	return (0);
}
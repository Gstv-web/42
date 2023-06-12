/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madougla <madougla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 10:04:10 by madougla          #+#    #+#             */
/*   Updated: 2023/06/07 10:37:56 by madougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int main(void)
{
	printf("char\t*ft_strupcase(char *str);\n");
	printf("---------------------------------------\n");
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	printf("Palavra em letras minúsculas: %s \n", str);
	printf("Palavra em letras maiúsculas: %s \n", ft_strupcase(str));
}
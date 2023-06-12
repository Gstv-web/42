/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madougla <madougla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 10:04:55 by madougla          #+#    #+#             */
/*   Updated: 2023/06/07 10:37:59 by madougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	printf("char\t*ft_strlowcase(char *str);\n");
// 	printf("---------------------------------------\n");
// 	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// 	printf("Palavra em letras maiúsculas: %s \n", str);
// 	printf("Palavra em letras minúsculas: %s \n", ft_strlowcase(str));
// 	return (0);
// }
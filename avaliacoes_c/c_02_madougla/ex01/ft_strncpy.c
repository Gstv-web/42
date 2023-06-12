/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 09:42:12 by madougla          #+#    #+#             */
/*   Updated: 2023/06/07 11:23:32 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

void test_ft_strncpy(char *src, unsigned int n)
{
	char dest[] = "abcdefghijklmnopqrstuvwxyz";
	printf("Source     : %s\n", src);
	printf("Dest       : %s\n", dest);
	printf("resultado 1: %s\n", ft_strncpy(dest, src, n));
	char dest2[] = "abcdefghijklmnopqrstuvwxyz";
	printf("resultado 2: %s\n", strncpy(dest2, src, n));
	printf("----------------------------\n");
}
int main(void)
{
	test_ft_strncpy("Ola", 1);
	test_ft_strncpy("Ola", 2);
	test_ft_strncpy("Ola", 3);
	test_ft_strncpy("Ola", 4);
	test_ft_strncpy("Ola", 36);
	test_ft_strncpy("visualstudiocode", 36);
	return 0;
}
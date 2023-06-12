/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:56:24 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/12 10:10:28 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	fwd;
	int	curr;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str [0] = str[0] - 32;
	}
	fwd = 1;
	curr = 0;
	while (str[fwd] != '\0')
	{
		if (!((str[curr] >= 'a' && str[curr] <= 'z')
				|| (str[curr] >= 'A' && str[curr] <= 'Z')
				|| (str[curr] >= '0' && str[curr] <= '9')))
		{
			if ((str[fwd] >= 'a') && (str[fwd] <= 'z'))
				str[fwd] -= 32;
		}
		else if (str[fwd] >= 'A' && str[fwd] <= 'Z')
			str[fwd] += 32;
		fwd++;
		curr++;
	}
	return (str);
}

// #include <stdio.h>
// int        main()
// {
//     char    str[] = "salut, comMeNt tu vas ? 42moTs quarante-de!ux;
// 	cinquante!et+un";
//     ft_strcapitalize(str);
//     printf("%s\n", str);
//     return (0);
// }

/*
A função recebe uma string.
Dentro da função instancio duas variáveis que servirão como índice. Um para
contar o índice atual (curr) e outro que conta o índice atual + 1 (fwd)
As condições são as seguintes:
- Antes do loop, se o índice 0 da string for um caractere minúsculo, muda pra
maiúsculo;
fwd recebe 1 e curr recebe 0 (fwd sempre estará um número a frente)
- Dentro do loop, enquanto a string não for '\0':
	- Se no índice atual não houver caracteres alfanuméricos (ou seja, 
contenha *!@/+, , enfim) entro em outra verificação pra ver se o próximo
caractere é uma letra minúscula. Se sim, fica maiúscula.
	- Caso essa última condição (antes da verificação) não se conclua,
verifico se a letra é maiúscula. Se sim, fica minúscula.
*/
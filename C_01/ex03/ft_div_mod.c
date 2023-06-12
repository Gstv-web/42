/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:23:12 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/08 10:10:38 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	n1;
// 	int	n2;
// 	int	*ptdiv;
// 	int	*ptmod;
// 	int	div;
// 	int	mod;

// 	n1 = 10;
// 	n2 = 3;
// 	div = 0;
// 	mod = 0;
// 	ptdiv = &div;
// 	ptmod = &mod; 
// 	ft_div_mod(n1, n2, ptdiv, ptmod);
// }

// OK

// Consigo fazer operações aritméticas com ponteiros também
// Instancinando variáveis para o resultado de uma operação ariméticas
// e atribuindo o valor do ponteiro ao resultado - a princípio zero -,
// é possível realizar as operações sem precisar adicionar variáveis na função,
// reduzindo o número de linhas.

// Posso instanciar a maior parte dos recursos em uma função e enviar para N
// funções que precisam do arquivo.
// É uma ideia pra estruturação de um programinha
// Não querendo relacionar muito pro POO, mas parece que posso criar um arquivo
// pra deixar variáveis que possam
// ser usadas recorrentemente e que sirvam para várias funções
// (ex a tabela 4x4 do rush)
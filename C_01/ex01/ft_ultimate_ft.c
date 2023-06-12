/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:47:51 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/08 13:09:05 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

// int	main(void)
// {
// 	int a = 200;
// 	int *pt1;
// 	int **pt2;
// 	int ***pt3;
// 	int ****pt4;
// 	int *****pt5;
// 	int ******pt6;
// 	int *******pt7;
// 	int ********pt8;
// 	int *********pt9;

// 	pt1 = &a;
// 	pt2 = pt1;
// 	pt3 = pt2;
// 	pt4 = pt3;
// 	pt5 = pt4;
// 	pt6 = pt5;
// 	pt7 = pt6;
// 	pt8 = pt7;
// 	pt9 = pt8;	

// 	ft_ultimate_ft(pt9);
// }

// OK

// cada var com * representa um ponteiro
// um ponteiro com n * só pode instanciar o endereço de um ponteiro
// com um * a menos (por isso a ordem crescente),
// neste caso, o pt1 armazena o endereço de a, o pt2 armazena o endereço
// do pt1 - que é o endereço de a - e assim por diante
// ao entrar na função que recebe o 9º ponteiro do ponteiro, o valor é
// alterado para 42, fazendo com que todos os ponteiros - inclusive a
// variável a - receba o novo valor de 42.

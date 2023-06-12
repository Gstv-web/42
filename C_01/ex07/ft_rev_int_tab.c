/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgustavo <jgustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:00:11 by jgustavo          #+#    #+#             */
/*   Updated: 2023/06/09 16:51:44 by jgustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	idx;
	int	buffer;

	idx = 0;
	buffer = 0;
	while (tab[idx] < size - 1)
	{
		buffer = tab[idx];
		tab[idx] = tab[size - 1];
		tab[size - 1] = buffer;
		idx++;
		size--;
	}
}

// int	main(void)
// {
// 	int	i;
// 	int	arr[8];

// 	arr[0] = 1;
// 	arr[1] = 2;
// 	arr[2] = 3;
// 	arr[3] = 4;
// 	arr[4] = 5;
// 	arr[5] = 6;
// 	arr[6] = 7;
// 	arr[7] = 8;
// 	i = 0;

// 	while(i < 8)
// 	{
// 		i++;
// 	}

// 	ft_rev_int_tab(arr, i);
// }

// OK

// Criei um array com tamanho já definido e instanciei os valores. depois eu
// contei o tamanho do array iterando pelo tamanho já definido.
// Na função que recebe o array criado e o tamanho do array, criei mais uma
// variável para contar o índice desse array recebido e um buffer para
// armazenar um valor posterior que a princípio recebe 0.
// Dentro do loop, enquanto o índice do array for menor que o tamanho total
// dele (começa 0 e vai até 7) o buffer recebe o valor do índice atual, depois
// o índice atual recebe o valor do último índice e o último índice recebe o
// valor do buffer - que é o do índice atual.
// Decrementando o tamanho total do array faz com que no próximo loop pegue o
// penúltimo índice e assim por diante.
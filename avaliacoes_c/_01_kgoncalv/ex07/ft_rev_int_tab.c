/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoncalv <kaykesandesgy@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:55:27 by kgoncalv          #+#    #+#             */
/*   Updated: 2023/06/07 09:20:38 by kgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	r_count;
	int	swap;

	count = 0;
	r_count = size -1;
	while (count < (size / 2))
	{
		swap = tab[count];
		tab[count] = tab[r_count];
		tab[r_count] = swap;
		count++;
		r_count--;
	}
}

// int	main(void)
// {
// 	int	tab[6];
// 	int size;

// 	size = 6;
// 	tab[0] = 48;
// 	tab[1] = 55;
// 	tab[2] = 52;
// 	tab[3] = 49;
// 	tab[4] = 57;
// 	tab[5] = 56;
// 	ft_rev_int_tab(tab, size);
// 	return (0);
// }
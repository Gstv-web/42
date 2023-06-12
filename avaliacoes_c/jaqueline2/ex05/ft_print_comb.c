/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqribei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:31:48 by jaqribei          #+#    #+#             */
/*   Updated: 2023/05/31 05:18:19 by jaqribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb(void)
{
	char	cent;
	char	ten;
	char	unit;

	cent = 48;
	while (cent <= 55)
	{
		ten = cent + 1;
		while (ten <= 56)
		{
			unit = ten + 1;
			while (unit <= 57)
			{
				write(1, &cent, 1);
				write(1, &ten, 1);
				write(1, &unit, 1);
				if (!(cent == 55 && ten == 56 && unit == 57))
					write(1, ", ", 2);
				unit++;
			}
		ten++;
		}
	cent++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_iterative_power.c                                :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/02 02:57:59 by mgrossen       #+#    #+#                */
/*   Updated: 2026/07/02 03:09:02 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	value;

	value = nb;
	while (power > 1)
	{
		nb *= value;
		power--;
	}
	return (nb);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_power(4, 5));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_recursive_power.c                                :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/02 03:30:16 by mgrossen       #+#    #+#                */
/*   Updated: 2026/07/02 03:37:45 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power > 1)
	{
		nb = nb * ft_recursive_power(nb, power - 1);
	}
	return (nb);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_power(4, 5));
}

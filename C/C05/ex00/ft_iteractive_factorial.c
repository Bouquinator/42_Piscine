/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_iteractive_factorial.c                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/01 21:23:48 by mgrossen       #+#    #+#                */
/*   Updated: 2026/07/02 00:48:54 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factoria(int nb)
{
	int	result;

	result = nb;
	while (nb > 1)
	{
		result *= (nb - 1);
		nb--;
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	printf("result = %d", ft_iterative_factoria(11));
}

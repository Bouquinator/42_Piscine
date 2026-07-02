/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_recursive_factorial.c                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/02 02:52:21 by mgrossen       #+#    #+#                */
/*   Updated: 2026/07/02 02:56:34 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	else
	{
		nb *= ft_recursive_factorial(nb - 1);
		return nb;
	}
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_factorial(5));
}

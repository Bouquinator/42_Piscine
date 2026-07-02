/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_sqrt.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/02 04:15:25 by mgrossen       #+#    #+#                */
/*   Updated: 2026/07/02 04:26:20 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	i = nb / 2;
	while(i > 0)
	{
		if (i * i == nb)
			return (i);
		i--;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_sqrt(4));
}

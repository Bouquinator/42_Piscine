/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_fibonacci.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/02 03:25:59 by mgrossen       #+#    #+#                */
/*   Updated: 2026/07/02 04:11:28 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonnacci(int index)
{
	if (index < 0)
		return (-1);
	if (index > 1)
		return ft_fibonnacci(index - 1) + ft_fibonnacci(index - 2);
	if (index == 1)
		return (1);
	if (index == 0)
		return (0);
	else
		return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_fibonnacci(-10));
}

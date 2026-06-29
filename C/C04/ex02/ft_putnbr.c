/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putnbr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/29 03:37:28 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/29 13:19:47 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	print;

	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nb < 10)
	{
		print = nb + '0';
		write(1, &print, 1);
	}
	else 
	{
		print = (nb % 10) + '0';
		nb = nb / 10;
		ft_putnbr(nb);
		write(1, &print, 1);
	}
}

int	main(void)
{
	ft_putnbr(-1);
}

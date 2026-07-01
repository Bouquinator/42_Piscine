/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putnbr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/29 03:37:28 by mgrossen       #+#    #+#                */
/*   Updated: 2026/07/01 12:08:03 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	print;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
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
/*
#include <limits.h>

int	main(void)
{
	ft_putnbr(INT_MIN);
} */

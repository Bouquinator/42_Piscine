/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putnbr_base.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/29 16:58:04 by mgrossen       #+#    #+#                */
/*   Updated: 2026/07/01 12:11:36 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_get_l(char *input)
{
	int	i;

	i = 0;
	while (input[i])
		i++;
	return (i);
}

int	ft_base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_get_l(base) <= 1)
		return (0);
	i = 0;
	j = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = (i + 1);
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	static int	depth = 0;
	char		print;
	int			base_nbr;
	int			rest;
	int			sign;

	sign = 1;
	if (nbr < 0 && depth == 0)
	{
		sign *= -1;
		nbr *= -1;
		write(1, "-", 1);
	}
	print = 'a';
	if (ft_base_check(base) == 1)
	{
		if (depth == 0 && nbr == 0)
			write(1, &base[0], 1);
		depth++;
		base_nbr = ft_get_l(base);
		if (nbr != 0)
		{
			rest = nbr % base_nbr;
			nbr = (nbr) / base_nbr;
			ft_putnbr_base(nbr, base);
			print = base[(rest)];
			write(1, &print, 1);
		}
	}
}
/*
int	main(void)
{
	ft_putnbr_base(-5, "poneyvif");
	return (0);
} */

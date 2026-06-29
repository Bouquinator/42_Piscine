/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putnbr_base.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/29 16:58:04 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/29 21:14:17 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_get_l(char *input)
{
	int	i;

	i = 0;
	while(input[i])
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
	while(base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = (i + 1);
		while(base[j])
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
	int	base_nbr;
	int	rest;
	char	print;

	if (ft_base_check(base) == 1)
	{	
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

int	main(void)
{
	ft_putnbr_base(60, "0123456789ABCDEF");
	return (0);
}

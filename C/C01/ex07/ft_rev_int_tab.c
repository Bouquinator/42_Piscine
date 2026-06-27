/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_rev_int_tab.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/24 22:56:59 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/25 14:41:54 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	l;
	int	a;

	i = 0;
	while (i <= ((size - 1) / 2) && size > 0)
	{
		l = (size - 1) - i;
		a = tab[l];
		tab[l] = tab[i];
		tab[i] = a;
		i++;
	}
}
/*
int	main(void)
{
	int tab[0] = {};
	int f;

	ft_rev_int_tab(tab,0);
	f = 0;
	while (f != 0)
	{
		printf("%d", tab[f]);
		f ++;
	}

	return (0);
} */

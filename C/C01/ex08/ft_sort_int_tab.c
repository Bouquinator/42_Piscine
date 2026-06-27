/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_sort_int_tab.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/25 11:25:44 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/25 12:36:03 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	e;
	int	i;
	int	a;
	int	b;

	e = 1;
	while (e != 0 && size != 0)
	{
		i = 0;
		e = 0;
		while (i < (size - 1))
		{
			b = i + 1;
			if (tab[i] > tab[b])
			{
				a = tab[i];
				tab[i] = tab[b];
				tab[(i + 1)] = a;
				e++;
			}
			i++;
		}
	}
}

//int	main(void)
//{
//	int i;
//	int tab[] = {4, 2, 1, 3};
//	
//	ft_sort_int_tab(tab, 4);
//	i = 0;
//	while (i != 4)
//	{
//		printf("%d", tab[i]);
//		i++;
//	}
//}

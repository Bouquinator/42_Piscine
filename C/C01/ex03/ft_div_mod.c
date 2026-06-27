/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_div_mod.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/24 18:45:10 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/25 12:17:22 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

//int	main(void)
//{
//	int	a;
//	int	b;
//	int*	div;
//	int*	mod;
//
//	a = 10;
//	b = 4;
//
//	div = malloc(sizeof(int));
//	mod = malloc(sizeof(int));
//
//	ft_div_mod(a, b, div, mod);
//	
//	printf("Resultat division = %d, resultat modulo = %d", *div, *mod);
//
//	free(div);
//	free(mod);
//}

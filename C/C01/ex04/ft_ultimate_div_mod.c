/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_ultimate_div_mod.c                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/24 19:07:20 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/25 12:21:07 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

//int	main(void)
//{
//	int* a;
//	int* b;
//
//	a = malloc(sizeof(int));
//	b = malloc(sizeof(int));
//
//	*a = 10;
//	*b = 4;
//	
//	ft_ultimate_div_mod(a, b);
//	
//	printf("%d, %d.", *a, *b);
//
//	free(a);
//	free(b);
//}

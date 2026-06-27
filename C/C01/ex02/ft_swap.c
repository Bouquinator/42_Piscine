/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_swap.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/24 16:54:06 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/25 12:21:22 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

//int	main(void)
//{
//	int*	 a;
//	int*	 b;
//	
//	a = malloc(sizeof(int));
//	b = malloc(sizeof(int));
//
//	*a = 'a';
//	*b = 'b';
//
//	ft_swap(a, b);
//	printf("a = %c, b= %c", *a, *b);
//	free(a);
//	free(b);
//}

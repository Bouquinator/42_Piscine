/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_numeric.c                                 :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/25 22:36:38 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/27 17:06:07 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	
	i= 0;
	while(str[i] != 0)
	{
		if (str[i] > '0' - 1 && str[i] < 58)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main(void)
{
	int	a;

	a = ft_str_is_numeric("");

	printf("%d", a);	
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_lowercase.c                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/25 23:13:33 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/27 17:08:49 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while(str[i] != 0)
	{
		if(str[i] > 96 && str[i] < 123)
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
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_str_is_lowercase("dsadD"));
} */

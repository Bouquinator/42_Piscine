/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_uppercase.c                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/27 17:14:24 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/27 20:49:02 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return(1);
}

#include <stdio.h>

int	main(void)
{
	printf("%d",ft_str_is_uppercase("UUUu"));
	return (0);
}

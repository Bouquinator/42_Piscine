/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlowcase.c                                     :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/27 23:19:08 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/28 13:09:55 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + ('a' - 'A');
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	string[] = "test STRING 12";

	printf("%s", ft_strlowcase(string));
	return 0;
} */

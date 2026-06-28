/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlcpy.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/28 12:26:21 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/28 13:11:16 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != 0)
	{
		if (i == (size - 1))
			dest[i] = '\0';
		else if (i < (size - 1))
			dest[i] = src[i];
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[] = "string de destination";
	char	src[] = "Maxime est le GOAT";
	unsigned int	size = 4;
	int	a;

	a = ft_strlcpy(dest, src, size);

	printf("%d\n", a);
	printf("%s\n", dest);
	printf("%s", src);
} */

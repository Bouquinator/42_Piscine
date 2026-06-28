/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncat.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/28 19:16:22 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/28 20:57:34 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (dest[i] != 0)
		i++;
	while (src[x] != 0 && x <= nb)
	{
		dest[i] = src[x];
		x++;
		i++;
	}
	if (x < nb)
		dest[(i)] = 0;
	return(dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[] = "test";
	char dest[50] = "world";
	char src2[] = "test";
	char dest2[50] = "world";
	unsigned int n;

	n = 5;

	strncat(dest2, src2, n);
	ft_strncat(dest, src, n);

	printf("ma fonction --> %s\n", dest);
	printf("fonction officielle --> %s\n", dest2);
}

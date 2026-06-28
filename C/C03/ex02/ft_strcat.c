/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strcat.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/28 18:34:14 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/28 19:31:01 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (dest[i] != 0)
		i++;
	while (src[x] != 0)
	{
		dest[(i + x)] = src[x];
		x++;
	}
	dest[(i + x)] = 0;
	return(dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[] = "test";
	char dest[10] = "world";
	char src2[] = "test";
	char dest2[10] = "world";

	strcat(dest2, src2);

	printf("%s\n", ft_strcat(dest, src));
	printf("%s", dest2);
}

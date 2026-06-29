/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncat.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/28 19:16:22 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/29 19:33:22 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	while (dest[i])
		i++;
	while (src[x] && x < nb)
	{
		dest[i] = src[x];
		x++;
		i++;
	}
	dest[(i)] = 0;
	return (dest);
}

#include <stdio.h>
#include <string.h>

void	ft_mega_print(char *input)
{
	int	i;

	i = 0;
	while(input[i])
	{
		if (input[i] < 32 || input[i] == 127)
			printf("\\%d\\", input[i]);
		else
			printf("%c", input[i]);
		i++;
	}
}

int	main(void)
{
	char src[] = "r\n";
	char dest[50] = "wor\vld";
	char src2[] = "r\n";
	char dest2[50] = "wor\vld";
	unsigned int n;

	n = 4;

	strncat(dest2, src2, n);
	ft_strncat(dest, src, n);

	printf("ma fonction\n");
	ft_mega_print(dest);
	printf("\nfonction officielle\n");
	ft_mega_print(dest2);
	printf("\nend\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncmp.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/28 17:49:19 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/28 18:25:06 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != 0 && i <= n)
		i++;
	if ((s1[i] != 0 || s2[i] != 0) && i < n)
		return (s1[i] - s2[i]);
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "";
	char	s2[] = "";
	int	n = 4;

	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d", strncmp(s1, s2, n));
}

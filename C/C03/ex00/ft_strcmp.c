/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strcmp.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/28 13:29:20 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/28 15:11:46 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	char	a;
	int	value;

	i=0;
	while(s1[i] == s2[i])
	{
		i++;
	}
	if (s1[(i + 1)] > s2[(i + 1)])
	{
		a = s1[(i + 1)];
		return (a);
	}
	else if (s1[(i + 1)] < s2[(i + 1)])
		return ((s1[i + 1]) * (-1));
	else
		return (0);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "testa";
	char	s2[] = "test";

	printf("%d",ft_strcmp(s1, s2));
}

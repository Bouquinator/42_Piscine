/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strcmp.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/28 13:29:20 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/29 13:33:40 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0)
	{
		i++;
	}
	if (s1[i] != 0 || s2[i] != 0)
		return (s1[i] - s2[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "testr";
	char	s2[] = "test";

	printf("%d",ft_strcmp(s1, s2));
} */

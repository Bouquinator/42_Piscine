/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strcpy.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/25 10:05:29 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/28 12:50:52 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{

	char	dest[7];
	int	i;

	ft_strcpy(dest, "string");
	
	i=0;
	while (i != 7)
	{
		printf("%c\n", dest[i]);
		i++;
	}
}*/

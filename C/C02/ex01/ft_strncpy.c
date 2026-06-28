/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncpy.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/25 19:17:49 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/28 13:05:50 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
//#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest[50];
	char	dest2[50];
	int	i;
	int	n;

	n = 20;
	ft_strncpy(dest, "Hello", n);
	i = 0;
	while(i < n)
	{
		if(dest[i] == 0)
		{
			write(1, "/0", 2); 
		}
		else
		{
			write(1, &dest[i], 1);
		}
		i++;
	}
	printf("\n");
	strncpy(dest2, "hello world", n);
	i = 0;
	while(i < n)
	{
		if(dest2[i] == 0)
		{
			write(1, "/0", 2);
		}
		else
		{
			write(1, &dest2[i], 1);
		}
		i++;
	}
} */

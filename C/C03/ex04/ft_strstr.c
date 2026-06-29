/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strstr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/28 23:19:45 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/29 20:05:09 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != 0 && i < n)
		i++;
	if ((s1[i] != 0 || s2[i] != 0) && i < n)
		return (s1[i] - s2[i]);
	return (0);
}

int	ft_get_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	length;

	if (to_find[0] == '\0')
		return (to_find);
	length = ft_get_length(to_find);
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			if (ft_strncmp(&str[i], to_find, length) == 0)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

void	ft_mega_print(char *input, char *description)
{
	int	i;

	i = 0;
	printf("Desc : %s\n\n", description);
	while(input[i] != 0)
	{
		if (input[i] < 32 || input[i] == 127)
			printf("\\%d\\", input[i]);
		else
			printf("%c", input[i]);
		i++;
	}
	printf("\n\nEnd -----\n");
}

int	main(void)
{
	char	str[] = "Ceci \test un test de strstr find";
	char	to_find[] = "chat";
	
	ft_mega_print(strstr(str, to_find), "Vrai");
	ft_mega_print(ft_strstr(str, to_find), "Faux");
}

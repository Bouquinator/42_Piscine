/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strcapitalize.c                                  :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/27 23:35:00 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/28 01:31:39 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_it(char	letter)
{
	if (letter >= '0' && letter <= '9')
		return(2);
	else if (letter >= 'a' && letter <= 'z')
		return (3);
	else if (letter >= 'A' && letter <= 'Z')
		return (3);
	else
		return (1);
}


char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] + ('A' - 'a');
	while (str[i] != 0)
	{
		if (ft_is_it(str[i] == 3))
		{
			if (ft_is_it(str[(i - 1)] == 1 && str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] + ('A' - 'a');
			else 
				str[i] = str[i] + ('a' - 'A');
		}
		i++;
	}
	return (str);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	string[] = "AAA DDD sSs";
	
	printf("%s", ft_strcapitalize(string));
}

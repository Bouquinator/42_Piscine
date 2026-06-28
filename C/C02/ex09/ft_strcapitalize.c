/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strcapitalize.c                                  :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/27 23:35:00 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/28 11:33:55 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_what(char letter)
{
	if (letter >= '0' && letter <= '9')
		return(1);
	else if (letter >= 'a' && letter <= 'z')
		return (2);
	else if (letter >= 'A' && letter <= 'Z')
		return (3);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;
	int	b;

	i = 1;
	if (ft_what(str[0]) == 2)
			str[0] = str[0] + ('A' - 'a');
	while (str[i] != 0)
	{
		a = ft_what(str[i]);
		b = ft_what(str[(i-1)]);
		if (a == 2 && b == 0)
			str[i] = str[i] + ('A' - 'a');
		else if (b == 1 || b == 2 || b == 3)
		{
			if (a == 3)
				str[i] = str[i] + ('a' - 'A');
		}
		i++;
	}
	return(str);
}

/*
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
*/

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	string[] = "hi, how are you? 42words forty-two; fifty+and+one";
	
	printf("%s", ft_strcapitalize(string));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_atoi_base.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/29 22:13:15 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/29 22:55:00 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char	input)
{
	if (input == ' ' || input == '\f' || input == '\n')
		return (1);
	if (input == '\r' || input == '\t' || input == '\v')
		return (1);
	else
		return(0);
}

int	ft_signs(char *str, int option)
{
	int	i;
	int	m;
	int	s;

	i = 0;
	m = 0;
	s = 0;
	while(str[i])
	{
		if (str[i] == '-')
		{
			m++;
			s++;
		}
		else if (str[i] == '+')
			s++;
		i++;
	}
	if (option == 1)
		return (m);
	else
		return (s);
}

int ft_atoi(char *str)
{
	int	i;
	int	x;
	int	min;
	int	number;

	i = 0;
	x = 0;
	while(str[i])
	{
		if (ft_isspace(i) == 1)
			x++;
		i++;
	}
	str = &str[x];
	i = 0;
	min = ft_signs(str, 1);
	str = &str[ft_signs(str, 2)];
	number = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		number = number + (str[i] - '0');
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			number = number * 10;
		i++;
	}
	if (min % 2 != 0)
		number = number * (-1);
	return (number);	
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_atoi("   --+---+12345a67"));
}

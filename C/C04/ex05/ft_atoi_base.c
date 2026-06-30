/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_atoi_base.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/29 22:13:15 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/30 09:37:16 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_l(char *input)
{
	int	i;

	i = 0;
	while(input[i])
		i++
	return (i);
}

int	ft_charcheck(char input, char *base)
{
	int	i;

	i = 0;
	if (input == ' ' || input == '\f' || input == '\n')
		return (1);
	if (input == '\r' || input == '\t' || input == '\v')
		return (1);
	while(base[i])
	{
		if (base[i] == input)
			return (2);
		i++;
	}
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

ft_base(char *input, char *base)
{
	int	i;
	int	j;

}

int ft_atoi_base(char *str char base)
{
	int	i;
	int	x;
	int	min;
	int	number;

	i = 0;
	x = 0;
	while(str[i])
	{
		if (ft_charcheck(i, 0) == 1)
			x++;
		i++;
	}
	str = &str[x];
	i = 0;
	min = ft_signs(str, 1);
	str = &str[ft_signs(str, 2)];
	number = 0;
	while(ft_charcheck(str[i], base) == 2)
		i++;
	str[i + 1] = '\0'
	number = ft_base(str, base);
	if (min % 2 != 0)
		number = number * (-1);
	return (number);	
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_atoi("   --+---+12345a67"));
}

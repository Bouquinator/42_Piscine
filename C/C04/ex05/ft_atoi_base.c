/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_atoi_base.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/30 14:30:11 by mgrossen       #+#    #+#                */
/*   Updated: 2026/07/01 02:53:30 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_base(char input, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (input == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_getl(char *input)
{
	int	i;

	i = 0;
	while (input[i])
		i++;
	return (i);
}

int	ft_base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_getl(base) < 2)
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[j] == '+' || base[j] == '-' || base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	signe;
	int	number;

	if (ft_base_check(base) == 0)
		return (0);
	signe = 1;
	i = 0;
	number = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (ft_is_base(str[i], base) != -1)
	{
		number = (number * ft_getl(base)) + ft_is_base(str[i], base);
		i++;
	}
	number *= signe;
	return (number);
}

#import <stdio.h>

int	main(void)
{
	printf("%d", ft_atoi_base("-111", "0123456789"));
}

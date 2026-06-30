/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   natoi_base.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/30 14:30:11 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/30 19:13:23 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_base(char input, char *base)
{
	int	i;

	i = 0;
	while(base[i])
	{
		if(input == base[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_renv(char *tab, int size)
{
	int	i;
	int	l;
	int	a;

	i = 0;
	while (i <= ((size - 1) / 2) && size > 0)
	{
		l = (size - 1) - i;
		a = tab[l];
		tab[l] = tab[i];
		tab[i] = a;
		i++;
	}
}

int	ft_getl(char *input)
{
	int	i;

	i = 0;
	while(input[i])
		i++;
	return (i);
}

int	ft_base_transfo(char *input, char *base)
{
	int	l;
	int	i;
	int	result;
	int	j;
	
	result = 0;
	l = ft_getl(base);
	i = 0;
	j = 0;
	if (base[0] == 0 || ft_getl(base) < 2)
		return (0);
	while(input[i])
	{
		j = 0;
		while(base[j] != input[i])
		{
			if (base[j] == '+' || base[j] == '-')
				return (0);
			j++;
		}
		result *= (l + j);
		i++;	
	}
	return(result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	signe;
	int	number;

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
	str = &str[i];
	i = 0;
	while (ft_is_base(str[i], base) == 1)
		i++;
	ft_renv(str, ft_getl(str));
	str = &str[ft_getl(str) - i];
	ft_renv(str, ft_getl(str));
	number = ft_base_transfo(str, base);
	number *= signe;
	return (number);
}

#import <stdio.h>

int	main(void)
{
	printf("%d", ft_atoi_base("  +-3Cj", "0123456789ABCDEF"));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_atoi.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/26 12:05:21 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/27 17:17:18 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	issspace(char test)
{
	if (test == ' ' || test == '\f' || test == '\n')
	{
		return (1);
	}
	if (test == '\r' || test == '\t' || test == '\v')
	{
		return (1);
	}
	else
	{
		return(0);
	}
}

int	isnegative(char *str, int *signe)
{
	int	i;
	int	m;

	i = 0;
	m = 0;
	while(str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			m++;
		i++;
	}


	*signe = i;

	if ((m % 2) == 0)
		return(0);
	return(1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	numb;
	int	n;
	int	*sign_ptr;
	int sign_count;

	sign_ptr = &sign_count;

	i = 0;
	numb = 0;
	while (issspace(str[i]))
	{
		i++;
	}
	str = &str[i];
	i = 0;
	n = isnegative(str, sign_ptr);

	str = &str[sign_count];
	while (str[i] >= '0' && str[i] <= '9')
	{
		numb = numb + (str[i] - 48);
			if (str[(i + 1)] >= '0' && str[(i + 1)] <= '9')
				numb = numb * 10;
		i++;
	}

	if (n == 1)
		numb = numb * (-1);
	return(numb);
}
/*
int	main(void)
{
	printf("%d", ft_atoi(" --+--+1234567"));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strupcase.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/27 23:03:41 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/27 23:18:29 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while(str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] + ('A' - 'a');
		i++;
	}
	return(str);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	uwu[] = "n feiagbuiwabyiteSSSDAFGG  15628i9786756543i";

	printf("%s", ft_strupcase(uwu));
}

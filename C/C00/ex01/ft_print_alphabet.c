/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_print_alphabet.c                                 :+:    :+:           */
/*                                                      +:+                   */
/*   By: mgrossen <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/23 14:11:45 by mgrossen       #+#    #+#                */
/*   Updated: 2026/06/23 20:02:45 by mgrossen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}

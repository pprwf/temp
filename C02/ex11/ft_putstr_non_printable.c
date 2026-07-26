/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 23:56:22 by peerapic          #+#    #+#             */
/*   Updated: 2026/07/25 00:08:41 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hex(unsigned char c)
{
	char	*hex;
	char	out[3];

	hex = "0123456789abcdef";
	out[0] = '\\';
	out[1] = hex[c / 16];
	out[2] = hex[c % 16];
	write(1, out, 3);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 32 || str[i] == 127))
			ft_hex(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}

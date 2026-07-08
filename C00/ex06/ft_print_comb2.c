/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 01:20:37 by peerapic          #+#    #+#             */
/*   Updated: 2026/07/08 19:33:56 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnum(char c1, char c2, char c3, char c4)
{
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, " ", 1);
	write(1, &c3, 1);
	write(1, &c4, 1);
}

void	ft_print_comb2(void)
{
	int	f;
	int	l;

	f = 0;
	l = f + 1;

	while (f <= 98)
	{
		while (l <= 99)
		{
			putnum(f / 10 + '0', f % 10 + '0', l / 10 + '0', l % 10 + '0');
			if (f != 98 && l <= 99)
			{
				write(1, ", ", 2);
			}
			l++;
		}
		f++;
		l = f + 1;
	}
}

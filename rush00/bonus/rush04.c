/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 19:28:34 by peerapic          #+#    #+#             */
/*   Updated: 2026/07/12 22:51:28 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush04(int x, int y)
{
	int	c;
	int	r;

	r = 1;

	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			if (c == 1 && r == 1 || r == y && c == x && x > 1 && y > 1)
				ft_putchar('A');
			else if (c == x && r == 1 || r == y && c == 1)
				ft_putchar('C');
			else if (r == 1 || r == y || c == 1 || c == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}

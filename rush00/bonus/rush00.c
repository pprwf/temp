/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 20:52:24 by peerapic          #+#    #+#             */
/*   Updated: 2026/07/12 22:51:41 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush00(int x, int y)
{
	int	c;
	int	r;

	r = 1;

	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((r == 1 || r == y) && (c == 1 || c == x))
				ft_putchar('o');
			else if (r == 1 || r == y)
				ft_putchar('-');
			else if (c == 1 || c == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}

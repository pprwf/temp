/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 19:28:34 by peerapic          #+#    #+#             */
/*   Updated: 2026/07/13 18:37:17 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c;
	int	r;

	r = 1;
	if (x <= 0 || y <= 0)
		return ;

	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			if (r == 1 && c == 1 || r == y && c == x && x > 1 && y > 1)
				ft_putchar('/');
			else if (r == 1 && c == x && x > 1 || c == 1 && r == y && y > 1)
				ft_putchar('\\');
			else if (r == 1 || r == y || c == 1 || c == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 00:09:27 by peerapic          #+#    #+#             */
/*   Updated: 2026/07/25 00:55:35 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hex(unsigned long n, int len)
{
	if (len > 1)
		ft_hex(n / 16, len - 1);
	write(1, &"0123456789abcdef"[n % 16], 1);
}

void	print_hex(unsigned char *p, unsigned int size, unsigned int i)
{
	int	j;

	j = 0;
	while (j < 16)
	{
		if (i + j < size)
			ft_hex(p[i + j], 2);
		else
			write(1, "  ", 2);
		if (j % 2 != 0)
			write(1, " ", 1);
		j++;
	}
	j = 0;
	while (j < 16 && i + j < size)
	{
		if (p[i + j] >= 32 && p[i + j] <= 126)
			write(1, &p[i + j], 1);
		else
			write(1, ".", 1);
		j++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *) addr;
	while (i < size)
	{
		ft_hex((unsigned long)(p + i), 16);
		write(1, ": ", 2);
		print_hex(p, size, i);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}

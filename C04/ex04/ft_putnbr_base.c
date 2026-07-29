/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 17:47:31 by peerapic          #+#    #+#             */
/*   Updated: 2026/07/27 22:30:57 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		j;
	long	n;

	i = -1;
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-')
			return ;
		j = i;
		while (base[++j])
			if (base[i] == base[j])
				return ;
	}
	if (i < 2)
		return ;
	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= i)
		ft_putnbr_base(n / i, base);
	write(1, &base[n % i], 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 22:32:18 by peerapic          #+#    #+#             */
/*   Updated: 2026/07/27 23:09:34 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_char(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
			if (base[i] == base[j++])
				return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

long	calc(char *str, char *base, int i, long n)
{
	int	len;
	int	val;

	len = check_base(base);
	while (str[i])
	{
		val = get_char(str[i++], base);
		if (val == -1)
			break ;
		n = (n * len) + val;
	}
	return (n);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	int		len_base;
	long	n;

	len_base = check_base(base);
	if (len_base == 0)
		return (0);
	i = 0;
	n = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] == 9))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	n = calc(str, base, i, n);
	return (n * sign);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 19:14:10 by peerapic          #+#    #+#             */
/*   Updated: 2026/07/24 20:14:25 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_solution(int n, int *arr, int pos)
{
	int		val;
	char	txt;

	val = 0;
	if (pos == n)
	{
		while (val < n)
		{
			txt = arr[val] + '0';
			write(1, &txt, 1);
			val++;
		}
		if (arr[0] < 10 - n)
			write(1, ", ", 2);
		return ;
	}
	else if (pos != 0)
		val = arr[pos - 1] + 1;
	while (val <= 9)
	{
		arr[pos] = val;
		ft_solution(n, arr, pos + 1);
		val++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];

	if (n > 0 && n < 10)
		ft_solution(n, arr, 0);
}

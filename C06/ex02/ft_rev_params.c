/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 03:40:09 by peerapic          #+#    #+#             */
/*   Updated: 2026/07/29 03:45:46 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int count, char **val)
{
	while (--count > 0)
	{
		while (*val[count])
			write(1, val[count]++, 1);
		write(1, "\n", 1);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 02:20:38 by peerapic          #+#    #+#             */
/*   Updated: 2026/07/29 03:21:58 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int count, char **val)
{
	if (count > 0)
	{
		while (*val[0])
			write(1, val[0]++, 1);
		write(1, "\n", 1);
	}
	return (0);
}

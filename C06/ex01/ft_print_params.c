/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 03:22:48 by peerapic          #+#    #+#             */
/*   Updated: 2026/07/29 03:46:26 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int count, char **val)
{
	while (--count && val++)
	{
		while (**val)
			write(1, (*val)++, 1);
		write(1, "\n", 1);
	}
	return (0);
}

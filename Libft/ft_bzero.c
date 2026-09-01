/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 15:48:29 by peerapic          #+#    #+#             */
/*   Updated: 2026/08/24 15:55:06 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptn;
	size_t	start;

	start = 0;
	ptn = (char *) s;
	while (start < n)
		ptn[start++] = 0;
}

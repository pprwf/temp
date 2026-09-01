/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 15:05:19 by peerapic          #+#    #+#             */
/*   Updated: 2026/08/24 15:42:57 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptn;
	size_t	start;

	start = 0;
	ptn = (char *) s;
	while (start < n)
		ptn[start++] = (char) c;
	return (s);
}

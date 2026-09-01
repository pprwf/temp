/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 18:33:39 by peerapic          #+#    #+#             */
/*   Updated: 2026/08/24 20:15:12 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	size_t		i;
	const char	*s;

	if (!dest && !src)
		return (NULL);
	d = (char *) dest;
	s = (const char *) src;
	if (d > s)
		while (n-- > 0)
			d[n] = s[n];
	else
	{
		i = -1;
		while (++i < n)
			d[i] = s[i];
	}
	return (dest);
}

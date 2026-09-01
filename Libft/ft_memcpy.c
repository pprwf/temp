/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 17:35:37 by peerapic          #+#    #+#             */
/*   Updated: 2026/08/24 20:12:05 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	size_t		i;
	const char	*s;

	if (!dest && !src)
		return (NULL);
	i = -1;
	d = (char *) dest;
	s = (const char *) src;
	while (++i < n)
		d[i] = s[i];
	return (dest);
}

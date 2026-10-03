/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 04:55:57 by peerapic          #+#    #+#             */
/*   Updated: 2026/09/03 05:17:06 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;
	size_t	numbr;

	if (nmemb == 0)
		nmemb = 1;
	if (size == 0)
		size = 1;
	total = nmemb * size;
	if ((total / size) != nmemb)
		return (0);
	ptr = malloc(total);
	if (!ptr)
		return (0);
	numbr = 0;
	while (numbr < total)
		((unsigned char *) ptr)[numbr++] = 0;
	return (ptr);
}

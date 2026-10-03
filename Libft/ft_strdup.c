/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 05:17:20 by peerapic          #+#    #+#             */
/*   Updated: 2026/09/03 05:27:44 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*dup;
	char	*temp;

	i = 0;
	len = 0;
	temp = (char *) s;
	while (*temp++)
		len++;
	dup = malloc(len + 1);
	if (!dup)
		return (0);
	while (*s)
		dup[i++] = *s++;
	dup[i] = '\0';
	return (dup);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 17:21:30 by peerapic          #+#    #+#             */
/*   Updated: 2026/09/05 04:15:01 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, const char *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*txt;

	len = 0;
	if (!s1 || !set)
		return (0);
	while (*s1 && in_set(*s1, set))
		s1++;
	while (s1[len])
		len++;
	while (len && in_set(s1[len - 1], set))
		len--;
	txt = malloc(len + 1);
	if (!txt)
		return (0);
	txt[len] = '\0';
	while (len--)
		txt[len] = s1[len];
	return (txt);
}

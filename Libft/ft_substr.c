/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 15:40:57 by peerapic          #+#    #+#             */
/*   Updated: 2026/09/04 17:04:15 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*txt;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (start-- && *s)
		s++;
	while (i < len && s[i])
		i++;
	txt = (char *) malloc(i + 1);
	if (!txt)
		return (0);
	txt[i] = '\0';
	while (i--)
		txt[i] = s[i];
	return (txt);
}

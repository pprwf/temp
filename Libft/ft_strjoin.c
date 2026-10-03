/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 17:07:28 by peerapic          #+#    #+#             */
/*   Updated: 2026/09/04 17:20:07 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*txt;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	txt = (char *) malloc(i + j + 1);
	if (!txt)
		return (0);
	i = 0;
	while (*s1)
		txt[i++] = *s1++;
	while (*s2)
		txt[i++] = *s2++;
	txt[i] = '\0';
	return (txt);
}

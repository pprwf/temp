/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 05:45:53 by peerapic          #+#    #+#             */
/*   Updated: 2026/09/05 07:55:53 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || !*(s + 1)))
			count++;
		s++;
	}
	return (count);
}

static char	*alloc(const char *s, int len)
{
	int		i;
	char	*word;

	word = malloc(len + 1);
	if (!word)
		return (0);
	i = -1;
	while (i++ < len)
		word[i] = s[i];
	word[len] = '\0';
	return (word);
}

static void	*free_arr(char **arr, int i)
{
	while (i > 0)
		free(arr[--i]);
	free(arr);
	return (0);
}

static char	**fill(char **arr, const char *s, char c)
{
	int	i;
	int	len;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			len = 0;
			while (s[len] && s[len] != c)
				len++;
			arr[i] = alloc(s, len);
			if (!arr[i])
				return (free_arr(arr, i));
			s += len;
		}
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (0);
	arr = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!arr)
		return (0);
	return (fill(arr, s, c));
}

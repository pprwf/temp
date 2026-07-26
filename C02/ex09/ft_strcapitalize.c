/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 23:26:34 by peerapic          #+#    #+#             */
/*   Updated: 2026/07/24 23:39:41 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_sep(char c)
{
	return (c == 9 || c == 32 || c == 43 || c == 45);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	i = 0;
	cap = 1;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122 && cap)
			str[i] -= 32;
		else if (str[i] >= 65 && str[i] <= 90 && !cap)
			str[i] += 32;
		cap = is_sep(str[i]);
		i++;
	}
	return (str);
}

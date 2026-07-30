/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 03:46:59 by peerapic          #+#    #+#             */
/*   Updated: 2026/07/29 03:54:51 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *a, char *b)
{
	while (*a && *a == *b)
	{
		a++;
		b++;
	}
	return (*a - *b);
}

int	main(int count, char **val)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (++i < count)
	{
		j = i;
		while (++j < count)
		{
			if (ft_strcmp(val[i], val[j]) > 0)
			{
				temp = val[i];
				val[i] = val[j];
				val[j] = temp;
			}
		}
	}
	while (*++val)
	{
		while (**val)
			write(1, (*val)++, 1);
		write(1, "\n", 1);
	}
	return (0);
}

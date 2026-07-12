/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 17:33:39 by peerapic          #+#    #+#             */
/*   Updated: 2026/07/12 22:51:17 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush00(int x, int y);
void	rush01(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);
void	rush04(int x, int y);

int	ft_atoi(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}

	return (n);
}

int	main(int count, char **index)
{
	int	x;
	int	y;

	if (count != 4 || x <= 0 || y <= 0)
		return ;

	x = ft_atoi(index[2]);
	y = ft_atoi(index[3]);

	if (index[1][0] == '0' && index[1][1] == '0' && index[1][2] == '\0')
		rush00(x, y);
	else if (index[1][0] == '0' && index[1][1] == '1' && index[1][2] == '\0')
		rush01(x, y);
	else if (index[1][0] == '0' && index[1][1] == '2' && index[1][2] == '\0')
		rush02(x, y);
	else if (index[1][0] == '0' && index[1][1] == '3' && index[1][2] == '\0')
		rush03(x, y);
	else if (index[1][0] == '0' && index[1][1] == '4' && index[1][2] == '\0')
		rush04(x, y);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 00:31:34 by peerapic          #+#    #+#             */
/*   Updated: 2026/07/29 01:20:42 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_board(int *board)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	is_safe(int *board, int col, int row)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (board[i] == row || board[i] - row == col - i
			|| row - board[i] == col - i)
			return (0);
		i++;
	}
	return (1);
}

int	solve(int *board, int col)
{
	int	row;
	int	count;

	if (col == 10)
	{
		print_board(board);
		return (1);
	}
	row = 0;
	count = 0;
	while (row < 10)
	{
		if (is_safe(board, col, row))
		{
			board[col] = row;
			count += solve(board, col + 1);
		}
		row++;
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];

	return (solve(board, 0));
}

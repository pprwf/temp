/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   z.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peerapic <peerapic@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 19:28:34 by peerapic          #+#    #+#             */
/*   Updated: 2026/07/10 19:28:34 by peerapic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y)
{
    int	col;
    int	row;
    
    col = 1;

    if (x <= 0 || y <= 0)
    {
        return;
    }

    while (col <= y)
    {
        col = 1;
        while (col <= x)
        {
            if ((col == 1 && col == 1) || (col == y && col == x && x > 1 && y > 1))
            {
                printf("/");
            }
            else if ((col == 1 && col == y && y > 1) || (col == 1 && col == x && x > 1))
            {
                printf("\\");
            }
            else if (col == 1 || col == x || col == 1 || col == y)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            col++;
        }
        printf("\n");
        col++;
    }
}

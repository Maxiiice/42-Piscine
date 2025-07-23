/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuvin <ajuvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 10:45:40 by ajuvin            #+#    #+#             */
/*   Updated: 2025/07/05 15:10:02 by ajuvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	op_line(int x, int max_x);

void	mid_line(int x, int y, int max_x, int max_y)
{
	if (y == max_y || y == 1)
		op_line(x, max_x);
	else if (y < max_y)
	{
		if (x == 1 || x == max_x)
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
}

void	op_line(int x, int max_x)
{
	if (x == max_x || x == 1)
		ft_putchar('o');
	else
		ft_putchar('-');
}

void	rush(int x, int y)
{
	int	max_x;
	int	max_y;

	max_x = x;
	max_y = y;
	if (x > 0 && y > 0)
	{
		while (y)
		{
			x = max_x;
			while (x)
			{
				mid_line(x, y, max_x, max_y);
				x--;
			}
			ft_putchar('\n');
			y--;
		}
	}
	else
		write(1, "Valeur rentrée incohérente", 27);
}

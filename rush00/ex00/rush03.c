/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuskiv <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 12:45:59 by yyuskiv           #+#    #+#             */
/*   Updated: 2025/07/05 15:12:04 by ajuvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	op_line(int x, int max_x);
void	mid_line(int x, int y, int max_x, int max_y);

void	mid_line(int x, int y, int max_x, int max_y)
{
	if (y == max_y)
		op_line(x, max_x);
	else if (y == 1)
		op_line(x, max_x);
	else if (y < max_y)
	{
		if (x == 1 || x == max_x)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	op_line(int x, int max_x)
{
	if (x == max_x)
		ft_putchar('A');
	else if (x == 1)
		ft_putchar('C');
	else
		ft_putchar('B');
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

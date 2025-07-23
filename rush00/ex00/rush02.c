/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuvin <ajuvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 13:19:27 by ajuvin            #+#    #+#             */
/*   Updated: 2025/07/05 14:28:29 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	first_line(int x, int max_x);
void	last_line(int x, int max_x);

void	line(int x, int y, int max_x, int max_y)
{
	if (y == max_y)
		first_line(x, max_x);
	else if (y == 1)
		last_line(x, max_x);
	else if (y < max_y)
	{
		if (x == 1 || x == max_x)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	last_line(int x, int max_x)
{
	if (x == max_x || x == 1)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	first_line(int x, int max_x)
{
	if (x == max_x || x == 1)
		ft_putchar('A');
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
				line(x, y, max_x, max_y);
				x--;
			}
			ft_putchar('\n');
			y--;
		}
	}
	else
		write(1, "Valeur rentrée incohérente", 27);
}

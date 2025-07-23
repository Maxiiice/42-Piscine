/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:47:54 by mwalter           #+#    #+#             */
/*   Updated: 2025/07/21 17:49:54 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int a, int b, int c)
{
	char	x;

	x = a + '0';
	write(1, &x, 1);
	x = b + '0';
	write(1, &x, 1);
	x = c + '0';
	write(1, &x, 1);
}

void	ft_print_space(int i)
{
	if (i != 119)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_numbers(int *a, int *b, int*c)
{
	int	i;

	i = 0;
	while (i < 120)
	{
		ft_print_number(*a, *b, *c);
		if (*c < 9)
			*c = *c + 1;
		else
		{
			if (*b < 8)
				*b = *b + 1;
			else if (*a < 7)
			{
				*a = *a + 1;
				*b = *a + 1;
			}
			*c = *b + 1;
		}
		ft_print_space(i);
		i++;
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 2;
	ft_print_numbers(&a, &b, &c);
}

/*int   main()
  {
  ft_print_comb();
  }*/

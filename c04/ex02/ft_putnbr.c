/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:21:18 by mwalter           #+#    #+#             */
/*   Updated: 2025/07/14 14:23:39 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

/*#include <stdio.h>

int     main(void)
{
        ft_putnbr(0);
        ft_putchar('\n');
        ft_putnbr(-2147483648);
        ft_putchar('\n');
        ft_putnbr(-520);
        ft_putchar('\n');
        ft_putnbr(2147483647);
        ft_putchar('\n');
        ft_putnbr(42);
        ft_putchar('\n');
        return (0);
}*/

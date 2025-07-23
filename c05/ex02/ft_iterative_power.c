/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:54:40 by mwalter           #+#    #+#             */
/*   Updated: 2025/07/14 12:15:03 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	base;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	base = nb;
	while (--power)
		nb *= base;
	return (nb);
}

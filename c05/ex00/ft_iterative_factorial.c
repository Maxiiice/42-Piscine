/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iteractive_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:15:03 by mwalter           #+#    #+#             */
/*   Updated: 2025/07/14 11:51:54 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	j;

	i = 1;
	j = 2;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (j <= nb)
	{
		i *= j;
		j++;
	}
	return (i);
}

/*int	main(int i) 
{
	int nb = 5;
		
	ft_iterative_factorial(nb);
	printf("La factoriel de %d est : %d", nb, i);
}*/

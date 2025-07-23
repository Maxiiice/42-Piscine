/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:12:01 by mwalter           #+#    #+#             */
/*   Updated: 2025/07/21 14:06:29 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	diff;
	int	*range;

	i = 0;
	diff = max - min;
	if (diff < 1)
	{
		range = NULL;
		return (0);
	}
	range = malloc(diff * sizeof(int));
	if (range == NULL)
		return (0);
	while (i < diff)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int min = 0;
	int max = 0;
	int i;
	int *range;
	int size;

	size = max - min;
	range = ft_range(min, max);

	if (range == NULL)
	{
		printf("ft_range returned NULL.\n");
		return 1;
	}

	for (i = 0; i < size; i++)
	{
		printf("%d ", range[i]);
	}
	printf("\n");

	free(range);
	return 0;
}
*/

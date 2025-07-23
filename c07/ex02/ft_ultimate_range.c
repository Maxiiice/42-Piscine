/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:51:30 by mwalter           #+#    #+#             */
/*   Updated: 2025/07/21 14:07:01 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	diff;

	i = 0;
	diff = max - min;
	if (diff < 1)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(diff * sizeof(int));
	if (*range == NULL)
		return (0);
	while (i < diff)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (diff);
}
/*
#include <stdio.h>

int	main(void)
{
	int *tab;
	int size;
	int i;

	size = ft_ultimate_range(&tab, 5, 10);

	if (size == 0)
	{
		printf("Aucun élément ou erreur d'allocation.\n");
		return (1);
	}

	printf("Taille du tableau : %d\n", size);
	printf("Contenu du tableau :\n");
	for (i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");

	free(tab);
	return (0);
}
*/

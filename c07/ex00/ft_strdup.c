/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:32:50 by mwalter           #+#    #+#             */
/*   Updated: 2025/07/21 20:10:00 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = ft_strlen(src);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*copy;

	if (argc != 2)
	{
		printf("Usage: %s <string_to_duplicate>\n", argv[0]);
		return (1);
	}
	copy = ft_strdup(argv[1]);
	if (copy == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	printf("Original : %s\n", argv[1]);
	printf("Duplicate: %s\n", copy);
	free(copy);
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:07:33 by mwalter           #+#    #+#             */
/*   Updated: 2025/07/21 18:20:10 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest + ft_strlen(dest);
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr++ = '\0';
	return (dest);
}

int	get_size(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 1;
	while (strs[i] && i < size)
	{
		if (i + 1 == size)
			len += ft_strlen(strs[i]);
		else
			len += ft_strlen(strs[i]) + ft_strlen(sep);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = get_size(size, strs, sep);
	str = malloc((len + 1) * sizeof(char));
	str[0] = '\0';
	if (str != NULL)
	{
		i = 0;
		while (i < size && strs[i])
		{
			if (i + 1 == size || !strs[i + 1])
				ft_strcat(str, strs[i]);
			else
				ft_strcat(ft_strcat(str, strs[i]), sep);
			i++;
		}
	}
	return (str);
}
/*
int	main(int argc, char **argv)
{
	char *sep = argv[1];
	int size = argc - 2;
	char **words = &argv[2];

	char *result = ft_strjoin(size, words, sep);
	if (result)
	{
		printf("Ca doit faire ca je crois : %s\n", result);
		free(result);
	}
	else
	{
		printf("ERROR REBOOT DU PC.\n");
	}

	return 0;
}
*/

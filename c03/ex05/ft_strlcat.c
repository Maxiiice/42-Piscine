/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 08:38:04 by mwalter           #+#    #+#             */
/*   Updated: 2025/07/21 21:08:43 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char	*ptr;

	ptr = dest + ft_strlen(dest);
	while (size-- && *src != '\0')
		*ptr++ = *src++;
	*ptr = '\0';
	return (ft_strlen(dest));
}

#include <stdio.h>

int main(void)
{
    char buffer[50] = "Bonjour, ";
    char *src = "comment ça va ?";
    unsigned int result;

    result = ft_strlcat(buffer, src, 50);

    printf("Résultat : %s\n", buffer);
    printf("Longueur finale : %u\n", result);

    char buffer2[10] = "Salut ";
    result = ft_strlcat(buffer2, "tout le monde", 10);
    printf("Résultat : %s\n", buffer2);
    printf("Longueur finale : %u\n", result);

    return 0;
}

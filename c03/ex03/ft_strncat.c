/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 09:49:09 by mwalter           #+#    #+#             */
/*   Updated: 2025/07/11 08:36:40 by mwalter          ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest + ft_strlen(dest);
	while (nb-- && *src != '\0')
		*ptr++ = *src++;
	*ptr++ = '\0';
	return (dest);
}

/*#include <stdio.h>

int main(void)
{
    char dest[100] = "Bonjour, ";
    char src[] = "mon ami !";

    printf("Avant ft_strncat:\n");
    printf("dest = \"%s\"\n", dest);
    printf("src  = \"%s\"\n", src);

    ft_strncat(dest, src, 4);

    printf("\nAprès ft_strcat:\n");
    printf("dest = \"%s\"\n", dest);

    return 0;
}*/

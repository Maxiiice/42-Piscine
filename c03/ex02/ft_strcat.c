/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 09:18:06 by mwalter           #+#    #+#             */
/*   Updated: 2025/07/11 08:36:11 by mwalter          ###   ########.fr       */
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

/*#include <stdio.h>

int main(void)
{
    char dest[100] = "Bonjour, ";
    char src[] = "mon ami !";

    printf("Avant ft_strcat:\n");
    printf("dest = \"%s\"\n", dest);
    printf("src  = \"%s\"\n", src);

    ft_strcat(dest, src);

    printf("\nAprès ft_strcat:\n");
    printf("dest = \"%s\"\n", dest);

    return 0;
}*/

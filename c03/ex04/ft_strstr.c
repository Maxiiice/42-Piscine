/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 07:57:52 by mwalter           #+#    #+#             */
/*   Updated: 2025/07/11 08:37:39 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	compare(const char *X, const char *Y)
{
	while (*X && *Y)
	{
		if (*X != *Y)
		{
			return (0);
		}
		X++;
		Y++;
	}
	return (*Y == '\0');
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (ft_strlen(to_find) == 0)
		return (str);
	while (*str != '\0')
	{
		if ((*str == *to_find) && compare(str, to_find))
			return (str);
		str++;
	}
	return (0);
}

/*#include <stdio.h>

char *ft_strstr(char *str, char *to_find); // Déclaration anticipée

int main(void)
{
    char *haystack = "Bonjour, ceci est un test de strstr.";
    char *needle1 = "test";
    char *needle2 = "strstr";
    char *needle3 = "42";
    char *needle4 = "";

    char *result1 = ft_strstr(haystack, needle1);
    char *result2 = ft_strstr(haystack, needle2);
    char *result3 = ft_strstr(haystack, needle3);
    char *result4 = ft_strstr(haystack, needle4);

    if (result1)
        printf("Trouvé '%s' dans la chaîne : %s\n", needle1, result1);
    else
        printf("'%s' non trouvé.\n", needle1);

    if (result2)
        printf("Trouvé '%s' dans la chaîne : %s\n", needle2, result2);
    else
        printf("'%s' non trouvé.\n", needle2);

    if (result3)
        printf("Trouvé '%s' dans la chaîne : %s\n", needle3, result3);
    else
        printf("'%s' non trouvé.\n", needle3);

    if (result4)
        printf("Trouvé '%s' dans la chaîne : %s\n", needle4, result4);
    else
        printf("'%s' non trouvé.\n", needle4);

    return 0;
}*/

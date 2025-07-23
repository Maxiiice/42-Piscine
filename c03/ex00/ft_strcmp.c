/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:20:06 by mwalter           #+#    #+#             */
/*   Updated: 2025/07/10 09:34:25 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
				return (1);
			else
				return (-1);
		}
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	else if (s1[i] > s2[i])
		return (1);
	else
		return (-1);
}

/*int	main()
{
	char *str1 = "bonjour";
	char *str2 = "bonjour";
	char *str3 = "bonsoir";
	char *str4 = "bonjou";

	printf("Comp 1 : %d\n", ft_strcmp(str1, str2));
	printf("Comp 2 : %d\n", ft_strcmp(str1, str3));
	printf("Comp 3 : %d\n", ft_strcmp(str3, str1));
	printf("Comp 4 : %d\n", ft_strcmp(str4, str1));
}*/

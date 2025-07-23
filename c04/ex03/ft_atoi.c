/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:23:56 by mwalter           #+#    #+#             */
/*   Updated: 2025/07/14 14:28:24 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	espace(char letter)
{
	if (letter == ' ' || letter == '\t' || letter == '\n'
		|| letter == '\v' || letter == '\f' || letter == '\r')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	res;
	int	i;

	sign = 1;
	i = 0;
	res = 0;
	while (espace(str[i]))
			i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

/*#include <stdio.h>
#include <stdlib.h>

int     main(void)
{
        printf("%d\n", ft_atoi(" ---+--+1234ab567"));
        printf("%d\n", ft_atoi(""));
        printf("%d\n", ft_atoi("    "));
        printf("%d\n", atoi("1234ab567"));
        printf("%d\n", atoi(""));
        printf("%d\n", atoi("    "));
        return 0;
}*/

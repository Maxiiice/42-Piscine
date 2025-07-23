/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:01:29 by mwalter           #+#    #+#             */
/*   Updated: 2025/07/23 12:52:06 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;

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

	len = ft_strlen(src);
	str = malloc((len + 1) * sizeof(*src));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*tab;
	int					i;

	i = 0;
	tab = (struct s_stock_str *)malloc((ac + 1) * sizeof(*tab));
	if (tab == NULL)
		return (tab);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
int main(int argc, char **argv)
{
	t_stock_str *tab;
	int i;

	tab = ft_strs_to_tab(argc - 1, argv + 1);
	if (tab == NULL)
	{
		printf("Erreur d'allocation\n");
		return 1;
	}

	i = 0;
	while (i < argc - 1)
	{
		printf("Original : %s\n", tab[i].str);
		printf("Copie    : %s\n", tab[i].copy);
		printf("Taille   : %d\n", tab[i].size);
		i++;
	}

	i = 0;
	while (i < argc - 1)
	{
		free(tab[i].copy);
		i++;
	}
	free(tab);

	return 0;
}

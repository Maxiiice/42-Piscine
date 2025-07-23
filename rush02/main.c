/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwalter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 10:28:34 by mwalter           #+#    #+#             */
/*   Updated: 2025/07/19 11:59:48 by mwalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/rush02.h"

int	main(int argc, char **argv)
{
	//t_dict	*head;

	//head = NULL;
	if (argc < 2 || argc > 3)
		return (ft_puterr("Error\n"));
	else if (!ft_checkargs(argv[argc - 1]))
		return (ft_puterr("Error\n"));
	else if (argc == 3)
		//head = ft_parse_dict(argv[1]);
	//else
		//head = ft_parse_dict("en.dict");
	//if (head == NULL)
		//return (ft_puterr("Dict Error\n"));
	//if (!ft_aff_nbr(argv[argc - 1], head))
	//{
		//ft_free_dict(head);
		//return (ft_puterr("Dict Error\n"));
	//}
	return (0);
}

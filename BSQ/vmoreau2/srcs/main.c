/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 09:42:58 by julnolle          #+#    #+#             */
/*   Updated: 2019/09/18 23:20:46 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

int		main(int ac, char **av)
{
	int		i;
	char	*grid;

	if (ac == 1)
	{
		grid = ft_read_stdin(0);
		bsq_from_stdin(grid);
		free(grid);
	}
	else
	{
		i = 1;
		while (i < ac)
		{
			bsq_from_file(av[i]);
			if (i != ac - 1)
				ft_putchar('\n');
			i++;
		}
	}
	return (0);
}

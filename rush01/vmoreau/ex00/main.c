/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 14:58:06 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/08 22:50:02 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

int		abs_on_line(int k, int **map, int i)
{
	int j;

	j = 0;
	while (j < 4)
	{
		if (map[i][j] == k)
			return (0);
		j++;
	}
	return (1);
}

int		abs_on_col(int k, int **map, int j)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (map[i][j] == k)
			return (0);
		i++;
	}
	return (1);
}

int		check_line(int **map, int **arg, int position, int *xy)
{
	int i;
	int j;
	int k;

	i = position / 4;
	j = position % 4;
	k = 1;
	if (position == 4 * 4)
		return (1);
	if (map[i][j] != 0)
		return (check_line(map, arg, position + 1, xy));
	while (k <= 4)
	{
		if (abs_on_line(k, map, i) == 1 && abs_on_col(k, map, j) == 1 &&
			checkvuehori(arg, map, xy, k))
		{
			map[i][j] = k;
			if (check_line(map, arg, position + 1, xy) == 1)
				return (1);
		}
		k++;
	}
	map[i][j] = 0;
	return (0);
}

int		main(int argc, char **argv)
{
	int **map;
	int **arg;
	int xy[2];

	map = NULL;
	arg = NULL;
	(void)argc;
	map = ft_alloc(map);
	xy[0] = 0;
	xy[1] = 0;
	if (map == NULL)
	{
		ft_putstr("Error\n");
		return (0);
	}
	arg = ft_alloc(arg);
	if (arg == NULL)
	{
		free(map);
		ft_putstr("Error\n");
		return (0);
	}
	if (ft_strlen(argv[1]) > 31)
	{
		ft_putstr("Error\n");
		return (0);
	}
	ft_init_map(map);
	ft_init_arg(argv[1], arg);
	if (check_line(map, arg, 0, xy) == 1)
		display(map);
	else if (check_line(map, arg, 0, xy) == 0)
		ft_putstr("Error\n");
	return (0);
}

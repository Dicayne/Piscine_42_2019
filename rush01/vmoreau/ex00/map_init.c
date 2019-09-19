/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 12:03:54 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/08 21:41:48 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		**ft_alloc(int **map)
{
	int i;

	i = 0;
	if (!(map = (int **)malloc(sizeof(int *) * 4)))
		return (0);
	while (i < 4)
	{
		if (!(map[i++] = (int *)malloc(sizeof(int) * 4)))
			return (0);
	}
	return (map);
}

void	ft_init_map(int **map)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			map[i][j] = 0;
			j++;
		}
		j = 0;
		i++;
	}
}

void	ft_init_arg(char *str, int **arg)
{
	int x;
	int y;
	int i;

	y = 0;
	i = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			arg[y][x] = str[i] - '0';
			i = i + 2;
			x++;
		}
		y++;
	}
}

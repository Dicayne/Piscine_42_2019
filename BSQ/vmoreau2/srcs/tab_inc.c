/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_inc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 10:17:32 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/18 17:38:00 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

void		change_sqr(char **tab, t_pose pos, t_params params)
{
	int x;
	int y;

	if (pos.y >= 1 && pos.x >= 1)
		y = pos.y - pos.max;
	else
		y = pos.y;
	if (pos.max > 0)
	{
		while (y <= pos.y)
		{
			if (pos.x > 0)
				x = pos.x - pos.max;
			else
				x = 0;
			while (x <= pos.x)
			{
				tab[y][x] = params.full;
				x++;
			}
			y++;
		}
	}
}

t_pose		find_sqr(int **tab, int max_x, int max_y, int max)
{
	int		y;
	int		x;
	int		bool;
	t_pose	pos;

	bool = 0;
	y = 0;
	while (y < max_y && bool == 0)
	{
		x = 0;
		while (x < max_x && bool == 0)
		{
			if (tab[y][x] == max)
				bool = 1;
			x++;
		}
		y++;
	}
	if (max > 1)
		max--;
	pos.x = x - 1;
	pos.y = y - 1;
	pos.max = max;
	return (pos);
}

int			find_max_val(int **tab, int max_x, int max_y)
{
	int y;
	int x;
	int max;

	y = 0;
	max = 0;
	while (y < max_y)
	{
		x = 0;
		while (x < max_x)
		{
			if (tab[y][x] > max)
				max = tab[y][x];
			x++;
		}
		y++;
	}
	return (max);
}

int			check_value(int **tab, int x, int y)
{
	int check_v1;
	int check_v2;
	int check_v3;

	check_v1 = tab[y][x - 1];
	check_v2 = tab[y - 1][x];
	check_v3 = tab[y - 1][x - 1];
	if (check_v1 <= check_v2 && check_v1 <= check_v3)
		return (check_v1);
	if (check_v2 <= check_v1 && check_v2 <= check_v3)
		return (check_v2);
	if (check_v3 <= check_v1 && check_v3 <= check_v2)
		return (check_v3);
	return (0);
}

t_pose		inc_tab(int **tab, int max_x, int max_y)
{
	int		x;
	int		y;
	int		max_val;
	t_pose	pos;

	y = 1;
	while (y < max_y)
	{
		x = 1;
		while (x < max_x)
		{
			if (tab[y][x] != 0)
				tab[y][x] = tab[y][x] + check_value(tab, x, y);
			x++;
		}
		y++;
	}
	max_val = find_max_val(tab, max_x, max_y);
	pos = find_sqr(tab, max_x, max_y, max_val);
	return (pos);
}

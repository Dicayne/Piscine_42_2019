/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_view.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 19:48:44 by vmoreau           #+#    #+#             */
/*   Updated: 2019/09/08 22:51:59 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

int		check_vew_hori1(int **arg, int **map, int *xy, int val)
{
	int pos;
	int vue;
	int tour;

	pos = 0;
	vue = 0;
	tour = 0;
	while (pos < 4)
	{
		if (pos == xy[1] && val > tour)
		{
			++vue;
			tour = val;
		}
		else if (pos != xy[1] && map[xy[0]][pos] > tour && map[xy[0]][pos] != 0)
		{
			++vue;
			tour = map[xy[0]][pos];
		}
		pos++;
	}
	if (vue <= arg[2][xy[0]])
		return (1);
	return (0);
}

int		check_vew_hori2(int **arg, int **map, int *xy, int val)
{
	int pos;
	int vue;
	int tour;

	pos = 3;
	vue = 0;
	tour = 0;
	while (pos >= 0)
	{
		if (pos == xy[1] && val > tour)
		{
			++vue;
			tour = val;
		}
		else if (pos != xy[1] && map[xy[0]][pos] > tour && map[xy[0]][pos] != 0)
		{
			++vue;
			tour = map[xy[0]][pos];
		}
		pos--;
	}
	if (vue <= arg[3][xy[0]])
		return (1);
	return (0);
}

int		checkvuehori(int **arg, int **map, int *xy, int k)
{
	if (map[xy[0]][3] == 0 && 3 != xy[1])
		return (check_vew_hori1(arg, map, xy, k));
	else
	{
		return (check_vew_hori1(arg, map, xy, k)
				&& check_vew_hori2(arg, map, xy, k));
	}
}

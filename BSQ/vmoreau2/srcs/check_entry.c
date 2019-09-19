/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_entry.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 08:57:14 by julnolle          #+#    #+#             */
/*   Updated: 2019/09/18 23:07:46 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"
#include <stdio.h>

int			check_char(char *grid, t_params params)
{
	int i;

	i = 0;
	while (grid[i] != '\0')
	{
		if (grid[i] != params.empty && grid[i] != params.obstacle
				&& grid[i] != '\n')
			return (0);
		i++;
	}
	if (params.empty == params.obstacle || params.empty == params.full
		|| params.full == params.obstacle)
		return (0);
	return (1);
}

int			ft_seterror_n(char *grid, t_params params)
{
	int i;

	i = 0;
	while (grid[i])
		i++;
	i--;
	if (grid[i] == '\n')
		return (params.error_n = 1);
	else
		return (params.error_n = 0);
}

int			check_line(char **map, t_params params)
{
	int i;

	i = 0;
	while (map[i] != '\0')
	{
		if (ft_strlen(map[i]) != params.size)
			return (0);
		i++;
	}
	if (params.size == 0 || params.line == 0)
		return (0);
	return (1);
}

int			check_entry(char **map, char *grid, t_params params)
{
	if (check_char(grid, params) == 0 || check_line(map, params) == 0)
		return (0);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_grid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 09:27:17 by julnolle          #+#    #+#             */
/*   Updated: 2019/09/18 23:38:39 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

int		count_lines(char *grid, t_params params)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (grid[i] != 0)
	{
		if (grid[i] == '\n')
			count++;
		i++;
	}
	params.error_line = count;
	return (count - 1);
}

int		**convert_binary(char **grid, int **grid_int, t_params params)
{
	int i;
	int j;

	i = 0;
	while (grid[i])
	{
		j = 0;
		while (grid[i][j])
		{
			if (grid[i][j] == params.empty)
				grid_int[i][j] = 1;
			if (grid[i][j] == params.obstacle)
				grid_int[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid_int);
}

int		**convert_int(char **grid, int count_lines, int size, t_params params)
{
	int **grid_int;
	int j;

	if (!(grid_int = (int **)malloc(sizeof(int*) * count_lines)))
		return (NULL);
	j = 0;
	while (j <= count_lines)
	{
		if (!(grid_int[j] = (int *)malloc(sizeof(int) * size)))
			return (NULL);
		j++;
	}
	grid_int = convert_binary(grid, grid_int, params);
	return (grid_int);
}

int		**convert_grid(char *grid, t_params params)
{
	int		size;
	char	**grid_split;
	int		**grid_int;

	if (!(grid_split = ft_split(grid, "\n")))
		return (0);
	size = 0;
	while (grid_split[size] != 0)
		size++;
	grid_int = convert_int(grid_split, params.line, params.size, params);
	free(grid_split);
	return (grid_int);
}

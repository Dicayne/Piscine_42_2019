/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_entry.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:00:59 by julnolle          #+#    #+#             */
/*   Updated: 2019/09/18 23:11:35 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

char		*parse_entry(char *grid)
{
	int		i;
	int		j;
	char	*tab;

	if (!(tab = (char*)malloc(sizeof(char) * ft_strlen(grid) + 1)))
		return (NULL);
	i = 0;
	while (grid[i] != 0 && grid[i] != '\n')
		i++;
	j = 0;
	i++;
	while (grid[i] != 0)
	{
		tab[j] = grid[i];
		i++;
		j++;
	}
	return (tab);
}

t_params	pick_params(char *grid)
{
	t_params	params;
	int			i;
	int			j;

	i = 0;
	params.error = 1;
	if (grid[i] == '0')
		params.error = 0;
	while (grid[i] != 0 && grid[i] != '\n')
		i++;
	j = i - 1;
	while (j > 0)
	{
		if (j == i - 1)
			params.full = grid[j];
		else if (j == i - 2)
			params.obstacle = grid[j];
		else if (j == i - 3)
			params.empty = grid[j];
		else
			break ;
		j--;
	}
	params.line = count_lines(grid, params);
	return (params);
}

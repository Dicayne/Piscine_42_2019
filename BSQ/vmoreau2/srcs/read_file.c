/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:28:11 by julnolle          #+#    #+#             */
/*   Updated: 2019/09/18 23:25:31 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

char	*ft_malloc_grid(char *s1, char *s2, int ret)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(str = malloc(sizeof(char) * (ft_strlen(s1) + ret + 1))))
		return (NULL);
	if (s1)
	{
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	free(s1);
	return (str);
}

char	*ft_read_grid(char *file)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];
	char	*grid;

	if (!(grid = malloc(sizeof(*grid) * 1)))
		return (NULL);
	grid[0] = '\0';
	if ((fd = open(file, O_RDONLY)) != -1)
	{
		while ((ret = read(fd, buf, BUF_SIZE)) > 0)
		{
			if (ret == -1)
				return (NULL);
			buf[ret] = '\0';
			grid = ft_malloc_grid(grid, buf, ret);
		}
		if (close(fd) == -1)
			return (NULL);
	}
	return (grid);
}

char	*ft_read_stdin(int fd)
{
	int		ret;
	char	buf[BUF_SIZE + 1];
	char	*grid;

	if (!(grid = malloc(sizeof(char) * 1)))
		return (NULL);
	grid[0] = '\0';
	while ((ret = read(fd, buf, BUF_SIZE)) > 0)
	{
		if (ret == -1)
		{
			ft_putstr("Error\n");
			return (NULL);
		}
		buf[ret] = '\0';
		grid = ft_malloc_grid(grid, buf, ret);
	}
	return (grid);
}

void	bsq_from_file(char *file)
{
	char		*grid;
	char		**map;
	t_pose		pos;
	t_params	params;

	if (ft_read_grid(file) == NULL)
	{
		ft_putstr("Error\n");
		return ;
	}
	params = pick_params(ft_read_grid(file));
	grid = parse_entry(ft_read_grid(file));
	params.error_n = ft_seterror_n(grid, params);
	map = ft_split(grid, "\n");
	if (params.error == 1 || params.error_n == 1)
		params.size = ft_strlen(map[0]);
	if (check_entry(map, grid, params) == 1 && params.error == 1)
	{
		pos = inc_tab(convert_grid(grid, params), params.size, params.line);
		trade(pos, params, map);
	}
	else
		write(2, "map error\n", 10);
}

void	bsq_from_stdin(char *grid)
{
	char		*grid2;
	char		**map;
	t_pose		pos;
	t_params	params;

	params = pick_params(grid);
	grid2 = parse_entry(grid);
	if ((map = ft_split(grid2, "\n")) == NULL)
		return ;
	if (params.error == 1)
		params.size = ft_strlen(map[0]);
	if (check_entry(map, grid2, params) == 1 && params.error == 1)
	{
		pos = inc_tab(convert_grid(grid2, params), params.size, params.line);
		trade(pos, params, map);
	}
	else
		write(2, "map error\n", 10);
}

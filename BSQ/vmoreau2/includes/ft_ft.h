/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:57:22 by julnolle          #+#    #+#             */
/*   Updated: 2019/09/18 22:52:15 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FT_H
# define FT_FT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# define BUF_SIZE 5000000

/*
**STRUC
*/
typedef struct		s_params
{
	int		size;
	int		line;
	char	empty;
	char	obstacle;
	char	full;
	int		error;
	int		error_line;
	int		error_n;
}					t_params;

typedef struct		s_pose
{
	int		x;
	int		y;
	int		max;
}					t_pose;

/*
**TOOLS
*/
void				ft_putchar(char c);
void				ft_putstr(char *str);
int					ft_strlen(char *str);
void				ft_putnbr(int nb);
void				ft_display(char **grid);
int					ft_atoi(const char *str);
int					ft_strcmp(char *s1, char *s2);
char				**ft_split(char *str, char *charset);
char				*ft_strdup(char *src);

/*
**LECTURE DE MAP
*/
char				*ft_read_stdin(int fd);
char				*ft_read_grid(char *file);
void				bsq_from_stdin(char *grid);
void				bsq_from_file(char *file);
void				trade(t_pose pos, t_params params, char **map);

/*
**PARSING
*/
char				*parse_entry(char *grid);

/*
**ERREUR MAP
*/
int					check_entry(char **map, char *grid, t_params params);
int					ft_seterror_n(char *grid, t_params params);

/*
**MALLOC
*/
int					**convert_grid(char *grid, t_params params);

/*
**RECUPERATION DE DONNER
*/
int					count_lines(char *grid, t_params params);
t_params			pick_params(char *grid);

/*
**FIND SQUARE
*/
t_pose				inc_tab(int **tab, int max_x, int max_y);
void				change_sqr(char **tab, t_pose pos, t_params params);

#endif
